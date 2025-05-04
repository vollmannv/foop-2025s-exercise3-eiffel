note
	description: "Summary description for {GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME

inherit
	EV_APPLICATION

create
	make

feature
	player: PLAYER
	deer: ARRAY [DEER]
	ticks: EV_TIMEOUT
	deer_move_timer: EV_TIMEOUT

feature {NONE}
	make
		local
			win: MAIN_WINDOW
			keyboard_handler: KEYBOARD_HANDLER
			i: INTEGER
			d: DEER
		do
			create player.make (200, 200)
			create ticks
			create deer_move_timer
			create deer.make_empty

			-- create application	
			default_create

			-- create window
			create win.make

			-- add player
			win.world.extend (player.picture)
			win.world.extend (player.viewport)

			-- add deer
			from i := 1 until i > deer_count
			loop
				create d.make
				deer.force (d, i)
				win.world.extend (deer [i].picture)
				i := i+1
			end


			-- add keyboard handler
			create keyboard_handler.make(win)
			keyboard_handler.add_key_action ({EV_KEY}.key_w, agent w_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_a, agent a_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_s, agent s_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_d, agent d_pressed)

			-- start ticks
			ticks.actions.extend (agent win.refresh)
			ticks.set_interval (ticks_interval)

			-- start deer movement
			deer_move_timer.actions.extend (agent move_deer)
			deer_move_timer.set_interval (deer_move_interval)

			-- start game
			win.show
			launch
		end

feature {NONE} -- Keyboard events

	w_pressed
		do
			player.move_up
		end

	a_pressed
		do
			player.move_left
		end

	s_pressed
		do
			player.move_down
		end

	d_pressed
		do
			player.move_right
		end

feature {NONE} -- Deer movement
	move_deer
	    local
	        i: INTEGER
	    do
	        from
	            i := deer.lower
	        until
	            i > deer.upper
	        loop
	            deer [i].move
	            i := i + 1
	        end
	    end

feature -- Constants
	deer_count: INTEGER = 10
	ticks_interval: INTEGER = 16
	deer_move_interval: INTEGER = 160
end

