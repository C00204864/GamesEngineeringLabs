#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SDL.h>
#include "ConcreteCommands.h"
#include "Macro.h"
#include "Animation.h"

class InputHandler
{
public:
	InputHandler(Animation & animation);
	~InputHandler();
	void handleKeyboardInput(SDL_Keycode & code);
	void undo(int commandCount);
private:
	Animation & r_animation;
	Command * btnOne;
	Command * btnTwo;
	Command * btnThree;
	Command * btnFour;
	std::vector<Command *> undoList;
};

#endif // !INPUTHANDLER_H
