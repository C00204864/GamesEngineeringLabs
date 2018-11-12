#ifndef AISYSTEM_H
#define AISYSTEM_H

#include <SDL.h>
#include "System.h"
#include "PositionComponent.h"

class AISystem : public System
{
public:
	AISystem();
	~AISystem();
	void init(int windowWidth, int windowHeight);
	void updateComponent(Component * component) override;
private:
	int m_windowWidth;
	int m_windowHeight;
};

#endif // !HEALTHSYSTEM_H
