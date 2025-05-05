note
	description: "Summary description for {SCORE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SCORE

inherit
	EV_MODEL_TEXT

create
	make

feature {NONE} -- Initialization
	current_score: INTEGER

	make
		local
			l_font: EV_FONT

		do
			current_score := 0
			make_with_text (score_pretext + current_score.out)
			create l_font.make_with_values ({EV_FONT}.family_typewriter, {EV_FONT}.weight_regular, {EV_FONT}.shape_regular, 48)
			set_font (l_font)
		end

feature -- Public methods
	increase_score (number: INTEGER)
		require
			number_greater_eq_zero: number >= 0
		do
			current_score := current_score + number
			set_text (score_pretext + current_score.out)
		end

	reset_score
		do
			current_score := 0
		end

	get_score: INTEGER
		do
			Result := current_score
		end

feature {NONE} -- Constants
	score_pretext: STRING = "Score: "
end
