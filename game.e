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
	obstacles: ARRAY [OBSTACLE]
	score: SCORE
	ticks: EV_TIMEOUT
	deer_move_timer: EV_TIMEOUT

feature {NONE}
	make
		local
			win: MAIN_WINDOW
			keyboard_handler: KEYBOARD_HANDLER
			i: INTEGER
			d: DEER
			o: OBSTACLE
		do
			create player.make (200, 200)
			create ticks
			create deer_move_timer
			create deer.make_empty
			create obstacles.make_empty
			create score.make

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
				-- win.world.extend (deer [i].bounds_debug)
				i := i+1
			end

			-- add obstacles
			from i := 1 until i > obstacle_count
			loop
				create o.make ("images/tree.png")
				obstacles.force (o, i)
				win.world.extend (obstacles [i].picture)
				-- win.world.extend (obstacles [i].bounds_debug)
				i := i+1
			end

			-- add score
			win.world.extend (score)


			-- add keyboard handler
			create keyboard_handler.make(win)
			keyboard_handler.add_key_action ({EV_KEY}.key_w, agent w_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_a, agent a_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_s, agent s_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_d, agent d_pressed)
			keyboard_handler.add_key_action ({EV_KEY}.key_space, agent space_pressed)

			-- start ticks
			ticks.actions.extend (agent win.refresh)
			ticks.set_interval (ticks_interval)

			-- start deer movement
			deer_move_timer.actions.extend (agent move_deer)
			deer_move_timer.set_interval (deer_move_interval)

			-- start game
			win.show
			launch
		rescue
			io.put_string ("An exception occurred during game startup!%N")
		end

feature {NONE} -- Keyboard events

	w_pressed
		do
			player.move_up (obstacles)
			update_obstacles ({SPRITE_DIRECTION}.up)
		end

	a_pressed
		do
			player.move_left (obstacles)
			update_obstacles ({SPRITE_DIRECTION}.left)
		end

	s_pressed
		do
			player.move_down (obstacles)
			update_obstacles ({SPRITE_DIRECTION}.down)
		end

	d_pressed
		do
			player.move_right (obstacles)
			update_obstacles ({SPRITE_DIRECTION}.right)
		end

	space_pressed
		local
			score_result: INTEGER
		do
			score_result := player.take_picture (deer, obstacles)
			score.increase_score (score_result)
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
	            deer [i].move (obstacles)
	            i := i + 1
	        end
	    end

	update_obstacles (direction: INTEGER)
		local
			i: INTEGER
			cx, cy, width, height: INTEGER
		do
			from
				i := obstacles.lower
			until
				i > obstacles.upper
			loop
				cx := obstacles [i].picture.x
				cy := obstacles [i].picture.y
				width := obstacles [i].picture.width
				height := obstacles [i].picture.height
				obstacles [i].extrude_bounds (direction, cx, cy, width, height, player.x, player.y)
				i := i+1
			end
		end

feature -- Constants
	deer_count: INTEGER = 10
	obstacle_count: INTEGER = 50
	ticks_interval: INTEGER = 16
	deer_move_interval: INTEGER = 160
end

