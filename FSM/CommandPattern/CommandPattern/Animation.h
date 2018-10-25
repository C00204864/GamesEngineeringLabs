#ifndef ANIMATION_H
#define ANIMATION_H

#include <image/SDL_image.h>
#include "State.h"
#include "Jump.h"

class Animation
{
public:
	Animation();
	~Animation();
	void init(SDL_Renderer * renderer);
	void update(Uint32 deltaTime);
	void render();
	void setCurrentState(State * state);
	void setPreviousState(State * state);
	State * getCurrentState();
	State * getPreviousState();
	void jump();
	void crouch();
	void melee();
private:
	State * m_currentState;
	State * m_previousState;

	SDL_Rect m_sourceRect;
	SDL_Rect m_destRect;

	int jumpRectY = 0;
	int crouchRectY = 16;
	int meleeRectY = 32;
	int frameWidth = 16;
	int frames = 4;
	int currentFrame = 0;
	Uint32 timeSinceLastFrameChange = 0;
	float frameRate;
	

	SDL_Renderer * p_renderer;
	SDL_Surface * p_image;
	SDL_Texture * p_texture;
};

#endif // !ANIMATION_H
