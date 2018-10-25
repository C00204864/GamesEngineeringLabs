#ifndef CROUCH_H
#define CROUCH_H

#include "State.h"
#include "Jump.h"
#include "Melee.h"

class Crouch : public State
{
public:
	Crouch();
	~Crouch();
	void melee(Animation * animation);
	void jump(Animation * animation);
};

#endif // !CROUCH_H