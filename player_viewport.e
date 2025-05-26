note
	description: "Summary description for {PLAYER_VIEWPORT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_VIEWPORT

inherit
	EV_MODEL_POLYGON

create
	make

feature {NONE}
	make (x_init, y_init, dir_init: INTEGER)
		do
			default_create
			set_position_and_direction (x_init, y_init, dir_init)
		end

feature
	direction: INTEGER

feature
	set_position_and_direction (x_new, y_new, new_direction: INTEGER)
		require
			valid_direction: new_direction >= 1 and new_direction <= 4
		do
			default_create
            update_viewport (x_new, y_new, new_direction)
            set_center
		end

feature {NONE}
	update_viewport (x_new, y_new, dir: INTEGER)
        local
            size, half_base: INTEGER
			x_offset, y_offset: INTEGER
        do
            size       := 200
            half_base  := 160
            x_offset   := 18
            y_offset   := 10
            inspect dir
            when {SPRITE_DIRECTION}.up then
                extend_point (create {EV_COORDINATE}.make (x_new + x_offset,                    y_new + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new - half_base + x_offset,        y_new - size + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new + half_base + x_offset,        y_new - size + y_offset))
            when {SPRITE_DIRECTION}.down then
                extend_point (create {EV_COORDINATE}.make (x_new + x_offset,                    y_new + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new - half_base + x_offset,        y_new + size + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new + half_base + x_offset,        y_new + size + y_offset))
            when {SPRITE_DIRECTION}.left then
                extend_point (create {EV_COORDINATE}.make (x_new + x_offset,                    y_new + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new - size + x_offset,             y_new - half_base + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new - size + x_offset,             y_new + half_base + y_offset))
            when {SPRITE_DIRECTION}.right then
                extend_point (create {EV_COORDINATE}.make (x_new + x_offset,                    y_new + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new + size + x_offset,             y_new - half_base + y_offset))
                extend_point (create {EV_COORDINATE}.make (x_new + size + x_offset,             y_new + half_base + y_offset))
            end
        end

end
