#include "Game.h"

Game::Game() : m_animation(), inputHandler(m_animation)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "Failed to initialise SDL" << std::endl;
	}
	p_window = SDL_CreateWindow("Command Pattern", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1080, 720, SDL_WINDOW_SHOWN);
	if (NULL == p_window)
	{
		std::cout << "Error: Could not create window" << std::endl;
	}
	p_renderer = SDL_CreateRenderer(p_window, -1, 0);
	if (NULL == p_renderer)
	{
		std::cout << "Error: Could not create renderer" << std::endl;
	}
	if (IMG_Init(IMG_INIT_PNG) == 0)
	{
		std::cout << "Failed to initialise IMG" << std::endl;
	}
	SDL_SetRenderDrawColor(p_renderer, 0, 0, 255, 255);
	m_animation.init(p_renderer);
}

Game::~Game() {}

void Game::run()
{
	bool exit = false;
	float timePerFrame = 1000.f / 60.f;
	Uint32 timeSinceLastUpdate = 0;
	Uint32 timeSinceStart = SDL_GetTicks();
	while (!m_quit)
	{
		processEvents();
		timeSinceLastUpdate += SDL_GetTicks() - timeSinceStart;
		timeSinceStart = SDL_GetTicks();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update(timePerFrame);
		}
		render();
	}
	quit();
}

void Game::processEvents()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_KEYDOWN:
			inputHandler.handleKeyboardInput(event.key.keysym.sym);
			break;
		case SDL_QUIT:
			m_quit = true;
			break;
		}
	}
}

void Game::update(float dt)
{
	m_animation.update(dt / 3);
}

void Game::render()
{
	SDL_RenderClear(p_renderer);
	m_animation.render();
}

void Game::quit()
{
	SDL_DestroyRenderer(p_renderer);
	SDL_DestroyWindow(p_window);
	IMG_Quit();
	SDL_Quit();
}