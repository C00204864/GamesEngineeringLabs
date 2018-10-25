#include "Animation.h"

Animation::Animation()
{
	m_sourceRect = { 0, 0, 16, 16 };
	m_destRect = { 200, 200, 200, 200 };
	m_currentState = new Jump();
	m_previousState = nullptr;
}

Animation::~Animation()
{
	SDL_DestroyTexture(p_texture);
	SDL_FreeSurface(p_image);
}

void Animation::init(SDL_Renderer * renderer)
{
	p_renderer = renderer;
	p_image = IMG_Load("img\\spritesheet.png");
	p_texture = SDL_CreateTextureFromSurface(renderer, p_image);
}

void Animation::update(Uint32 deltaTime)
{
	timeSinceLastFrameChange += deltaTime;
	if (timeSinceLastFrameChange > 16)
	{
		timeSinceLastFrameChange = 0;
		++currentFrame;// = currentFrame == 4 ? 0 : currentFrame;
		if (currentFrame == frames)
		{
			currentFrame = 0;
		}
		m_sourceRect.x = frameWidth * currentFrame;
	}
}

void Animation::render()
{
	SDL_RenderCopy(p_renderer, p_texture, &m_sourceRect, &m_destRect);
	SDL_RenderPresent(p_renderer);
}

void Animation::setCurrentState(State * state)
{
	m_currentState = state;
}

void Animation::setPreviousState(State * state)
{
	m_previousState = state;
}

State * Animation::getCurrentState()
{
	return m_currentState;
}

State * Animation::getPreviousState()
{
	return m_previousState;
}

void Animation::jump()
{
	m_currentState->jump(this);
	m_sourceRect.y = jumpRectY;
	currentFrame = 0;
	m_sourceRect.x = 0;
}

void Animation::crouch()
{
	m_currentState->crouch(this);
	m_sourceRect.y = crouchRectY;
	currentFrame = 0;
	m_sourceRect.x = 0;
}

void Animation::melee()
{
	m_currentState->melee(this);
	m_sourceRect.y = meleeRectY;
	currentFrame = 0;
	m_sourceRect.x = 0;
}