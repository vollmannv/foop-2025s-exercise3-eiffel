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
	move_up (obstacles: ARRAY [OBSTACLE])
		do
			Precursor (obstacles)
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.up)
		end

	move_down (obstacles: ARRAY [OBSTACLE])
		do
			Precursor (obstacles)
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.down)
		end

	move_left (obstacles: ARRAY [OBSTACLE])
		do
			Precursor (obstacles)
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.left)
		end

	move_right (obstacles: ARRAY [OBSTACLE])
		do
			Precursor (obstacles)
			viewport.set_position_and_direction (sprite_x, sprite_y, {SPRITE_DIRECTION}.right)
		end

	take_picture (a_deer: ARRAY [DEER]; a_obstacles: ARRAY [OBSTACLE]): INTEGER
	    local
			i, j: INTEGER
			corners: ARRAY [EV_COORDINATE]
			all_inside, has_collision: BOOLEAN
		do
			Result := 0

			from i := a_deer.lower until i > a_deer.upper loop
				corners := a_deer[i].bounds
				all_inside := True
				has_collision := False

				-- Check if all corners are inside the player's viewport
				from j := corners.lower until j > corners.upper or else not all_inside loop
					if not viewport.position_on_figure (corners[j].x, corners[j].y) then
						all_inside := False
					end
					j := j + 1
				end

				-- Check for obstacle intersection
				from j := a_obstacles.lower until j > a_obstacles.upper or else has_collision loop
					if a_deer[i].intersects (a_obstacles[j]) then
						has_collision := True
					end
					j := j + 1
				end

				-- Only count if inside and not colliding
				if all_inside and not has_collision then
					Result := Result + 1
				end

				i := i + 1
			end
		ensure
			non_negative: Result >= 0
		end

end
