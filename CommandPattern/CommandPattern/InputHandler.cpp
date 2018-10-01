#include "InputHandler.h"

InputHandler::InputHandler()
{
	btnOne = new JumpCommand();
	btnTwo = new FireCommand();
	btnThree = new CrouchCommand();
	btnFour = new ShieldCommand();
	btnFive = new MeleeCommand();
	Macro * macro = new Macro();
	macro->add(new JumpCommand());
	macro->add(new FireCommand());
	macro->add(new CrouchCommand());
	macro->add(new ShieldCommand());
	macro->add(new MeleeCommand());
	btnSix = macro;
}

InputHandler::~InputHandler() {}

void InputHandler::handleKeyboardInput(SDL_Keycode & code)
{
	switch (code)
	{
	case SDLK_1:
		btnOne->execute();
		undoList.push_back(btnOne);
		break;
	case SDLK_2:
		btnTwo->execute();
		undoList.push_back(btnTwo);
		break;
	case SDLK_3:
		btnThree->execute();
		undoList.push_back(btnThree);
		break;
	case SDLK_4:
		btnFour->execute();
		undoList.push_back(btnFour);
		break;
	case SDLK_5:
		btnFive->execute();
		undoList.push_back(btnFive);
		break;
	case SDLK_6:
		btnSix->execute();
		undoList.push_back(btnSix);
		break;
	case SDLK_7:
		undo(6);
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