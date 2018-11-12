#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include "System.h"
#include "RenderComponent.h"
#include "PositionComponent.h"

class RenderSystem : public System
{
public:
	RenderSystem();
	~RenderSystem();
	void init(SDL_Renderer * rendererIn);
	void update() override;
private:
	SDL_Renderer * p_renderer;
};

#endif // !RENDERSYSTEM_H
