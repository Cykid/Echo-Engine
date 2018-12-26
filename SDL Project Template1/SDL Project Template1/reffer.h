#pragma once

#include <SDL.h>


class reffer
{
public:
	reffer();

	int screenWidth;
	int screenHeight;

	void * mainCamera;

	SDL_Window * screen;
	SDL_Renderer * renderer;
	SDL_Event eventHandler;

	~reffer();
};

