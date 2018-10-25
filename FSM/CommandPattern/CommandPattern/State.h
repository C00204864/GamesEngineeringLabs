#ifndef STATE_H
#define STATE_H

#include <iostream>

class Animation; // Forward Declaration

class State
{
public:
	State();
	void handleInput();
	void update();
	virtual void jump(Animation * animation);
	virtual void crouch(Animation * animation);
	virtual void melee(Animation * animation);
};

#endif // !STATE_H
