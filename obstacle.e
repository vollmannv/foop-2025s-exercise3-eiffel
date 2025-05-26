note
	description: "Summary description for {OBSTACLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBSTACLE
inherit
	RANDOM_GENERATOR
	BOUNDS_DEBUGGABLE

create
	make

feature -- Initialization
	make (image_path: STRING)
		local
			pixmap: EV_PIXMAP
			x, y, l_w, l_h, i, img_width, img_height: INTEGER
		do

			x := get_random_number ({MAIN_WINDOW}.window_width)
			y := get_random_number ({MAIN_WINDOW}.window_height)

			create pixmap
			pixmap.set_with_named_file (image_path)
			pixmap := pixmap.sub_pixmap (
				create {EV_RECTANGLE}.make (24, 0, 80, 128)
			)

			create picture.make_with_pixmap (pixmap)
			picture.scale (0.5)
			picture.set_point_position (x, y)

			make_bounds
			update_bounds (picture.x, picture.y, picture.width, picture.height)
		end

feature -- public
	picture: EV_MODEL_PICTURE

end
