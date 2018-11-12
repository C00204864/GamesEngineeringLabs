#ifndef RENDERCOMPONENT_H
#define RENDERCOMPONENT_H

#include <string>
#include <image/SDL_image.h>
#include "Component.h"

class RenderComponent : public Component
{
public:
	RenderComponent(std::string filenameIn, int widthIn, int heightIn, SDL_Renderer * renderer);
	~RenderComponent();
	SDL_Rect * getSourceRect();
	SDL_Rect * getDestRect();
	SDL_Surface * getSurface();
	SDL_Texture * getTexture();

private:
	SDL_Rect m_sourceRect;
	SDL_Rect m_destRect;
	SDL_Surface * p_surface;
	SDL_Texture * p_texture;
};

#endif // !RENDERCOMPONENT_H

