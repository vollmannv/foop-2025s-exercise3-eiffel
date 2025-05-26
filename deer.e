note
	description: "Summary description for {DEER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DEER

inherit
	GAME_SPRITE
		rename make as make_from_map end
	RANDOM_GENERATOR
	BOUNDS_DEBUGGABLE

create
	make

feature -- Initialization
	make
		local
			x_init, y_init: INTEGER
		do
			x_init := get_random_number ({MAIN_WINDOW}.window_width)
			y_init := get_random_number ({MAIN_WINDOW}.window_height)

			make_from_map (x_init, y_init, "images/deer.png")

			current_auto_dir := {SPRITE_DIRECTION}.down
			moves_in_current_dir := 0

			make_bounds
            update_bounds (picture.x, picture.y, picture.width, picture.height)
		end

feature -- Move randomly
	current_auto_dir: INTEGER
    moves_in_current_dir: INTEGER

  	move (obstacles: ARRAY [OBSTACLE])
        do
            if moves_in_current_dir >= 5 then
                current_auto_dir := get_random_number (4) + 1
				moves_in_current_dir := 0
            end

            inspect current_auto_dir
                when {SPRITE_DIRECTION}.up    then move_up (obstacles)
                when {SPRITE_DIRECTION}.down  then move_down (obstacles)
                when {SPRITE_DIRECTION}.left  then move_left (obstacles)
                when {SPRITE_DIRECTION}.right then move_right (obstacles)
            end
            moves_in_current_dir := moves_in_current_dir + 1
            update_bounds (picture.x, picture.y, picture.width, picture.height)
        end


end
