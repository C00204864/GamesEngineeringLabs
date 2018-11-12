#include "ControlSystem.h"

ControlSystem::ControlSystem() {}

ControlSystem::~ControlSystem() {}

void ControlSystem::updateComponent(Component * component)
{
	PositionComponent * pc = dynamic_cast<PositionComponent *>(component);
	if (nullptr != pc)
	{
		int x = pc->getX();
		int y = pc->getY();
		const Uint8 *state = SDL_GetKeyboardState(NULL);
		if (state[SDL_SCANCODE_RIGHT])
		{
			x += 5;
		}
		if (state[SDL_SCANCODE_LEFT])
		{
			x -= 5;
		}
		if (state[SDL_SCANCODE_DOWN])
		{
			y += 5;
		}
		if (state[SDL_SCANCODE_UP])
		{
			y -= 5;
		}
		pc->setX(x);
		pc->setY(y);
	}
}