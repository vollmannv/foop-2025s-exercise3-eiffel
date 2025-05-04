note
	description: "Summary description for {MAIN_WINDOW}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MAIN_WINDOW

inherit
	EV_TITLED_WINDOW
		redefine
			initialize
		end

create
	make

feature {NONE} -- INITIALIZATION
	make
		do
			create container
            create area
			create world
			create projector.make_with_buffer (world, create {EV_PIXMAP}.make_with_size (window_width, window_height), area)
            make_with_title (window_title)
		end

	initialize
		do
			Precursor {EV_TITLED_WINDOW}
			build_container
			extend (container)
			close_request_actions.extend (agent destroy)
			set_title (window_title)
			set_size (window_width, window_height)
		end

feature -- PUBLIC FEATURES
	world: EV_MODEL_WORLD
	area: EV_DRAWING_AREA
	projector: EV_MODEL_DRAWING_AREA_PROJECTOR

	refresh
		do
			area.redraw
			projector.project
		end

feature {NONE} -- BUILD CONTAINER
	container: EV_VERTICAL_BOX

	build_container
		local
			background: EV_PIXMAP
			background_image: EV_MODEL_PICTURE
			buffer: EV_PIXMAP
		do
			create background
			background.set_with_named_file ("images/Soil.png")
			background.set_size (window_width, window_height)

			create background_image.make_with_pixmap(background)
			world.extend (background_image)

			container.extend (area)

		ensure
			container_created: container /= Void
		end

feature -- CONSTANTS
	window_title: STRING = "Deer Hunting Game"
	window_width: INTEGER = 900
	window_height: INTEGER = 900

	tile_size: INTEGER = 32

end
