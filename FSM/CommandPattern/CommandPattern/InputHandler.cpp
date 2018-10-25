#include "InputHandler.h"

InputHandler::InputHandler(Animation & animation) : r_animation(animation)
{
	btnOne = new JumpCommand();
	btnTwo = new CrouchCommand();
	btnThree = new MeleeCommand();
	Macro * macro = new Macro();
	macro->add(new JumpCommand());
	macro->add(new CrouchCommand());
	macro->add(new MeleeCommand());
	btnFour = macro;
}

InputHandler::~InputHandler() {}

void InputHandler::handleKeyboardInput(SDL_Keycode & code)
{
	switch (code)
	{
	case SDLK_1:
		btnOne->execute(r_animation);
		undoList.push_back(btnOne);
		break;
	case SDLK_2:
		btnTwo->execute(r_animation);
		undoList.push_back(btnTwo);
		break;
	case SDLK_3:
		btnThree->execute(r_animation);
		undoList.push_back(btnThree);
		break;
	case SDLK_4:
		btnFour->execute(r_animation);
		undoList.push_back(btnFour);
		break;
	case SDLK_5:
		undo(1);
		break;
	}
}

void InputHandler::undo(int commandCount)
{
	for (int i = 0; i < commandCount; ++i)
	{
		if (undoList.size() != 0)
		{
			undoList.back()->undo();
			undoList.pop_back();
		}
		else
		{
			return;
		}
	}
}