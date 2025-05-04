note
	description: "Summary description for {KEYBOARD_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	KEYBOARD_HANDLER

create
	make

feature {NONE} -- Initialization

	make (a_widget: EV_WIDGET)
		do
			widget := a_widget
			create key_actions.make (10)
			capture
		end

feature -- Key handling

	key_actions: HASH_TABLE [PROCEDURE, INTEGER]

	add_key_action (key_code: INTEGER; action: PROCEDURE)
		do
			key_actions.force (action, key_code)
		end

	remove_key_action (key_code: INTEGER)
		do
			key_actions.remove (key_code)
		end

feature -- Event Handling

	on_key_pressed (key: EV_KEY)
		local
			action: PROCEDURE
		do
			if key_actions.has (key.code) then
				action := key_actions.item (key.code)
				if action /= Void then
					action.call ()
				end
			end
		end

feature {NONE} -- Event binding

	capture
		do
			widget.key_press_actions.extend (agent on_key_pressed)
		end

feature {NONE} -- Implementation

	widget: EV_WIDGET

end
