note
	description: "Summary description for {GAME_SPRITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME_SPRITE

create
	make

feature -- Initialization
	make (x_init, y_init: INTEGER; sprite_map_path: STRING)
		local
			full_pixmap: EV_PIXMAP
			sprite_width: INTEGER
			sprite_height: INTEGER
		do
			sprite_width := 1280 // 5
			sprite_height := 256

			create full_pixmap
			full_pixmap.set_with_named_file (sprite_map_path)

			-- down sprite is second sprite
			sprite_pixmap_down := full_pixmap.sub_pixmap (
				create {EV_RECTANGLE}.make (sprite_width * 1, 0, sprite_width, sprite_height)
			)

			-- left sprite is third sprite
			sprite_pixmap_left := full_pixmap.sub_pixmap (
				create {EV_RECTANGLE}.make (sprite_width * 2, 0, sprite_width, sprite_height)
			)

			-- right sprite is left sprite mirrored
			sprite_pixmap_right := mirror_pixmap (sprite_pixmap_left)

			-- up sprite is fourth
			sprite_pixmap_up := full_pixmap.sub_pixmap (
				create {EV_RECTANGLE}.make (sprite_width * 3, 0, sprite_width, sprite_height)
			)

			create picture.make_with_pixmap (sprite_pixmap_down)
			current_direction := {SPRITE_DIRECTION}.down
			picture.scale (0.15)
			picture.set_point_position (x_init, y_init)

			sprite_x := x_init
			sprite_y := y_init
		end

feature -- Movement
	picture: EV_MODEL_PICTURE

	x: INTEGER
		do
			Result := sprite_x
		end

	y: INTEGER
		do
			Result := sprite_y
		end

	move_up
		local
			new_y: INTEGER
		do
			new_y := sprite_y - 10
            if new_y < 0 then
                new_y := 0
            end
            sprite_y := new_y
			change_sprite ({SPRITE_DIRECTION}.up)
			picture.set_point_position (sprite_x, sprite_y)
		end

	move_down
		local
			new_y: INTEGER
		do
			new_y := sprite_y + 10
            if new_y > {MAIN_WINDOW}.window_height then
                new_y := {MAIN_WINDOW}.window_height
            end
            sprite_y := new_y
			change_sprite ({SPRITE_DIRECTION}.down)
			picture.set_point_position (sprite_x, sprite_y)
		end

	move_left
		local
			new_x: INTEGER
		do
			new_x := sprite_x - 10
            if new_x < 0 then
                new_x := 0
            end
            sprite_x := new_x
			change_sprite ({SPRITE_DIRECTION}.left)
			picture.set_point_position (sprite_x, sprite_y)
		end

	move_right
		local
			new_x: INTEGER
		do
			new_x := sprite_x + 10
            if new_x > {MAIN_WINDOW}.window_width then
                new_x := {MAIN_WINDOW}.window_width
            end
            sprite_x := new_x
			change_sprite ({SPRITE_DIRECTION}.right)
			picture.set_point_position (sprite_x, sprite_y)
		end

feature {NONE} -- Utils
	sprite_x, sprite_y: INTEGER
	sprite_pixmap_up, sprite_pixmap_down, sprite_pixmap_left, sprite_pixmap_right: EV_PIXMAP

	current_direction: INTEGER

	change_sprite (direction: INTEGER)
		require
			valid_direction: direction >= 1 and direction <= 4
		do
			if current_direction /= direction then
				current_direction := direction

				inspect direction
				when {SPRITE_DIRECTION}.up then
					picture.set_pixmap (sprite_pixmap_up)
				when {SPRITE_DIRECTION}.down then
					picture.set_pixmap (sprite_pixmap_down)
				when {SPRITE_DIRECTION}.left then
					picture.set_pixmap (sprite_pixmap_left)
				when {SPRITE_DIRECTION}.right  then
					picture.set_pixmap (sprite_pixmap_right)
				else
					-- impossible
				end

				picture.scale (0.15)
			end
		end

feature {NONE}
	mirror_pixmap (orig: EV_PIXMAP): EV_PIXMAP
    local
        l_w, l_h, l_x: INTEGER
        strip_region, dummy_region: EV_RECTANGLE
        strip_pixmap: EV_PIXMAP
    do
        l_w := orig.width
        l_h := orig.height

       create Result.make_with_size (l_w, l_h)

        create strip_region.make (0, 0, 1, l_h)
        create dummy_region.make (0, 0, 1, l_h)

        from l_x := 0 until l_x = l_w
        loop
            strip_region.set_x (l_x)
            strip_pixmap := orig.sub_pixmap (strip_region)
            Result.draw_sub_pixmap (l_w - 1 - l_x, 0, strip_pixmap, dummy_region)
            l_x := l_x + 1
        end
    end

end

