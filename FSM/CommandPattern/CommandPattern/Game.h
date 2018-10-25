#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SDL.h>
#include <image/SDL_image.h>
#include "InputHandler.h"
#include "Animation.h"

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	void processEvents();
	void update(float dt);
	void render();
	void quit();

	SDL_Window * p_window;
	SDL_Renderer * p_renderer;
	Animation m_animation;
	InputHandler inputHandler;
	bool m_quit = false;
};

#endif // !GAME_H

