#ifndef MELEE_H
#define MELEE_H

#include "State.h"
#include "Crouch.h"
#include "Jump.h"

class Melee : public State
{
public:
	Melee();
	~Melee();
	void jump(Animation * animation);
	void crouch(Animation * animation);
};

#endif // !MELEE_H