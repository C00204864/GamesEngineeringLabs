#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SDL.h>
#include "ConcreteCommands.h"
#include "Macro.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void handleKeyboardInput(SDL_Keycode & code);
	void undo(int commandCount);
private:
	Command * btnOne;
	Command * btnTwo;
	Command * btnThree;
	Command * btnFour;
	Command * btnFive;
	Command * btnSix;
	std::vector<Command *> undoList;
};

#endif // !INPUTHANDLER_H
