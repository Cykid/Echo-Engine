#include "reffer.h"



reffer::reffer()
{
	this->screenWidth = 1024;
	this->screenHeight = 768;
	if (SDL_Init(SDL_INIT_VIDEO) == -1) {
		
	}
	else {
		this->screen = SDL_CreateWindow("EchoEngine", 100, 100, this->screenWidth,this->screenHeight, SDL_WINDOW_SHOWN);
		this->renderer = SDL_CreateRenderer(this->screen, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}
}


reffer::~reffer()
{
}
