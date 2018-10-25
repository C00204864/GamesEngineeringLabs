#ifndef JUMP_H
#define JUMP_H

#include "State.h"
#include "Crouch.h"
#include "Melee.h"

class Jump : public State
{
public:
	Jump();
	~Jump();
	void crouch(Animation * animation);
	void melee(Animation * animation);
};

#endif // !JUMP_H
