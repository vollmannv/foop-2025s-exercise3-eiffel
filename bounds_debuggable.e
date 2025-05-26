class
	BOUNDS_DEBUGGABLE

create
	make_bounds

feature -- Debug bounds
	bounds: ARRAY [EV_COORDINATE]
	bounds_debug: EV_MODEL_POLYGON

feature -- Initialization
    make_bounds
        do
            create bounds.make_empty
            create bounds_debug
        end

feature -- Intersections
	intersects (other: BOUNDS_DEBUGGABLE): BOOLEAN
		local
			i, j, max_a, max_b, a_next, b_next: INTEGER
			ax1, ay1, ax2, ay2, bx1, by1, bx2, by2: INTEGER
		do
			max_a := bounds.upper
			max_b := other.bounds.upper

			from i := 1 until i > max_a
			loop
				a_next := if i = max_a then 1 else i + 1 end

				ax1 := bounds[i].x
				ay1 := bounds[i].y
				ax2 := bounds[a_next].x
				ay2 := bounds[a_next].y

				from j := 1 until j > max_b
				loop
					b_next := if j = max_b then 1 else j + 1 end

					bx1 := other.bounds[j].x
					by1 := other.bounds[j].y
					bx2 := other.bounds[b_next].x
					by2 := other.bounds[b_next].y

					if segments_intersect (ax1, ay1, ax2, ay2, bx1, by1, bx2, by2) then
						Result := True
					end
					j := j + 1
				end
				i := i + 1
			end
		end

feature -- Update
	update_bounds (cx, cy, width, height: INTEGER)
		local
			i: INTEGER
		do
			create bounds.make_empty
			bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy - height // 2), 1)
			bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy - height // 2), 2)
			bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy + height // 2), 3)
			bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy + height // 2), 4)

			if bounds_debug.point_count = 0 then
				from i := 1 until i > bounds.upper
				loop
					bounds_debug.extend_point (bounds [i])
					i := i + 1
				end
			else
				from i := 1 until i > bounds.upper
				loop
					bounds_debug.set_i_th_point_position (i, bounds [i].x, bounds [i].y)
					i := i + 1
				end
			end
		end

	extrude_bounds (direction, cx, cy, width, height, player_x, player_y: INTEGER)
		local
			i, max_height, max_width: INTEGER
			shift_left, shift_right, shift_up, shift_down: BOOLEAN
		do
			max_height := {MAIN_WINDOW}.window_height
			max_width := {MAIN_WINDOW}.window_width

			create bounds.make_empty

			-- Infer offset tendencies
			shift_left := player_x < cx - 60
			shift_right := player_x > cx + 60
			shift_up := player_y < cy - 60
			shift_down := player_y > cy + 60

			inspect direction
				when {SPRITE_DIRECTION}.up then
					if player_y < cy then
						update_bounds (cx, cy, width, height)
					else
						if shift_right then
							-- up-right
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy + height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (0, 0), 2)
							bounds.force (create {EV_COORDINATE}.make (0, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, 0), 4)
						elseif shift_left then
							-- up-left
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy + height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (max_width, 0), 2)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, 0), 4)
						else
							-- straight up
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy + height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy + height // 2), 2)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, 0), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, 0), 4)
						end
					end

				when {SPRITE_DIRECTION}.down then
					if player_y > cy then
						update_bounds (cx, cy, width, height)
					else
						if shift_right then
							-- down-right
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (0, max_height), 2)
							bounds.force (create {EV_COORDINATE}.make (0, cy - height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, max_height), 4)
						elseif shift_left then
							-- down-left
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (max_width, max_height), 2)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy - height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, max_height), 4)
						else
							-- straight down
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy - height // 2), 2)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, max_height), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, max_height), 4)
						end
					end

				when {SPRITE_DIRECTION}.left then
					if player_x < cx then
						update_bounds (cx, cy, width, height)
					else
						if shift_down then
							-- down-left
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy + height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (0, 0), 2)
							bounds.force (create {EV_COORDINATE}.make (0, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, 0), 4)
						elseif shift_up then
							-- up-left
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (0, max_height), 2)
							bounds.force (create {EV_COORDINATE}.make (0, cy - height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, max_height), 4)
						else
							-- straight left
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (cx + width // 2, cy + height // 2), 2)
							bounds.force (create {EV_COORDINATE}.make (0, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (0, cy - height // 2), 4)
						end
					end

				when {SPRITE_DIRECTION}.right then
					if player_x > cx then
						update_bounds (cx, cy, width, height)
					else
						if shift_down then
							-- down-right
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy + height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (max_width, 0), 2)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, 0), 4)
						elseif shift_up then
							-- up-right
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (max_width, max_height), 2)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy - height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, max_height), 4)
						else
							-- straight right
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy - height // 2), 1)
							bounds.force (create {EV_COORDINATE}.make (cx - width // 2, cy + height // 2), 2)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy + height // 2), 3)
							bounds.force (create {EV_COORDINATE}.make (max_width, cy - height // 2), 4)
						end
					end
			end

			from i := 1 until i > bounds.upper
			loop
				bounds_debug.set_i_th_point_position (i, bounds [i].x, bounds [i].y)
				i := i + 1
			end
		end

feature {NONE} -- helper
	segments_intersect (x1, y1, x2, y2, x3, y3, x4, y4: INTEGER): BOOLEAN
	local
		denom, num_a, num_b: DOUBLE
		ua, ub: DOUBLE
	do
		denom := ((y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1)).to_double

		if denom = 0.0 then
			Result := False  -- parallel
		else
			num_a := ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)).to_double
			num_b := ((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3)).to_double
			ua := num_a / denom
			ub := num_b / denom

			Result := ua >= 0.0 and ua <= 1.0 and ub >= 0.0 and ub <= 1.0
		end
	end


end
