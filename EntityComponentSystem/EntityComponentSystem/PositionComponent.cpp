#include "PositionComponent.h"

PositionComponent::PositionComponent(int xIn, int yIn) : m_x(xIn), m_y(yIn) {}

PositionComponent::~PositionComponent() {}

int PositionComponent::getX()
{
	return m_x;
}

int PositionComponent::getY()
{
	return m_y;
}

void PositionComponent::setX(int xIn)
{
	m_x = xIn;
}

void PositionComponent::setY(int yIn)
{
	m_y = yIn;
}
