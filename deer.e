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

create
	make

feature {NONE} -- Random Generator
	random_rng: RANDOM
		local
			time: TIME
			seed: INTEGER
		once
			create time.make_now
			seed := time.hour
			seed := seed * 60 + time.minute
			seed := seed * 1000 + time.milli_second
			create Result.make
			Result.set_seed (seed)
		end

	get_random_number (max: INTEGER): INTEGER
		do
			random_rng.forth
			Result := random_rng.item \\ max
		end


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
		end

feature -- Move randomly
	current_auto_dir: INTEGER
    moves_in_current_dir: INTEGER

  	move
        do
            if moves_in_current_dir >= 5 then
                current_auto_dir := get_random_number (4) + 1
				moves_in_current_dir := 0
            end

            inspect current_auto_dir
                when {SPRITE_DIRECTION}.up    then move_up
                when {SPRITE_DIRECTION}.down  then move_down
                when {SPRITE_DIRECTION}.left  then move_left
                when {SPRITE_DIRECTION}.right then move_right
            end
            moves_in_current_dir := moves_in_current_dir + 1
        end

end
