note
	description: "Summary description for {PLAYER_DIRECTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPRITE_DIRECTION


feature {ANY}
	up: INTEGER = 1
	down: INTEGER = 2
	left: INTEGER = 3
	right: INTEGER = 4
	valid (d: INTEGER): BOOLEAN
		do
			Result:= (d = up) or (d = down) or (d = left) or (d = right)
		end
end
