#include "RenderComponent.h"

RenderComponent::RenderComponent(std::string filenameIn, int widthIn, int heightIn, SDL_Renderer * renderer)
{
	p_surface = IMG_Load(filenameIn.c_str());
	p_texture = SDL_CreateTextureFromSurface(renderer, p_surface);
	int width = 0;
	int height = 0;
	SDL_QueryTexture(p_texture, NULL, NULL, &width, &height);
	m_sourceRect = { 0, 0, width, height };
	m_destRect = { 0, 0, widthIn, heightIn };
}

RenderComponent::~RenderComponent() {}

SDL_Rect * RenderComponent::getSourceRect()
{
	return &m_sourceRect;
}

SDL_Rect * RenderComponent::getDestRect()
{
	return &m_destRect;
}

SDL_Surface * RenderComponent::getSurface()
{
	return p_surface;
}

SDL_Texture * RenderComponent::getTexture()
{
	return p_texture;
}
