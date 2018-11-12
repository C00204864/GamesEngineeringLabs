#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <SDL.h>
#include "System.h"
#include "PositionComponent.h"

class ControlSystem : public System
{
public:
	ControlSystem();
	~ControlSystem();
	void updateComponent(Component * component) override;
};

#endif // !CONTROLSYSTEM_H
