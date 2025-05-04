note
	description: "Summary description for {PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER

inherit
	GAME_SPRITE
		rename make as make_from_map
		redefine move_up, move_down, move_left, move_right end

create
	make

feature -- Access
	viewport: PLAYER_VIEWPORT

feature -- Initialization	
	make (x_init, y_init: INTEGER)
		do
			make_from_map (x_init, y_init, "images/player.png")
			create viewport.make (x_init, y_init, {SPRITE_DIRECTION}.down)
		end

feature -- Movement
	move_up
		do
			Precursor
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.up)
		end

	move_down
		do
			Precursor
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.down)
		end

	move_left
		do
			Precursor
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.left)
		end

	move_right
		do
			Precursor
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.right)
		end
end
