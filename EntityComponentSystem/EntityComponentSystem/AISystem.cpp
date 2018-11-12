#include "AISystem.h"

AISystem::AISystem() {}

AISystem::~AISystem() {}

void AISystem::init(int windowWidth, int windowHeight)
{
	m_windowWidth = windowWidth;
	m_windowWidth = windowWidth;
}

void AISystem::updateComponent(Component * component)
{
	PositionComponent * pc = dynamic_cast<PositionComponent *>(component);
	if (nullptr != pc)
	{
		int x = pc->getX();
		int y = pc->getY();
		x += 3;
		if (x > m_windowWidth)
		{
			x = 0;
		}
		pc->setX(x);
		pc->setY(y);
	}
}