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

	take_picture (a_deer: ARRAY [DEER]): INTEGER
        -- How many of the `a_deer` sprites are fully inside the viewport?
    local
        i, j: INTEGER
        corners: ARRAY [EV_COORDINATE]
        all_inside: BOOLEAN
    do
        -- Initialize result
        Result := 0

        from
            i := a_deer.lower
        until
            i > a_deer.upper
        loop
            corners    := a_deer[i].get_bounds
            all_inside := True

            from
                j := corners.lower
            until
                j > corners.upper or else not all_inside
            loop
                if not viewport.position_on_figure (corners[j].x, corners[j].y) then
                    all_inside := False
                end
                j := j + 1
            end
            
            if all_inside then
                Result := Result + 1
            end

            i := i + 1
        end
    ensure
        non_negative: Result >= 0
    end

end
