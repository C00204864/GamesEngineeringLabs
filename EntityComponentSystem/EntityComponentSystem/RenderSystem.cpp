#include "RenderSystem.h"

RenderSystem::RenderSystem() {}

RenderSystem::~RenderSystem() {}

void RenderSystem::init(SDL_Renderer * rendererIn)
{
	p_renderer = rendererIn;
}

void RenderSystem::update()
{
	for (auto entity : m_entities)
	{
		RenderComponent * rc = nullptr;
		PositionComponent * pc = nullptr;
		for (auto component : entity.getComponents())
		{
			if (nullptr == rc)
			{
				rc = dynamic_cast<RenderComponent *>(component);
			}
			if (nullptr == pc)
			{
				pc = dynamic_cast<PositionComponent *>(component);
			}
		}
		if (nullptr != rc && nullptr != pc)
		{
			SDL_Rect * destRect = rc->getDestRect();
			destRect->x = pc->getX();
			destRect->y = pc->getY();
			SDL_RenderCopy(p_renderer, rc->getTexture(), rc->getSourceRect(), destRect);
		}
	}
}