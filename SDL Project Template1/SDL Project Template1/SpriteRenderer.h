#pragma once
#include <string>
#include <SDL.h>
#include <SDL_image.h>

#include "reffer.h"
class SpriteRenderer
{
public:
	SpriteRenderer(reffer * _refObj);

	~SpriteRenderer();

	void loadImage(std::string path);
	void renderSprite(float posX, float posY,float angle);

	
	reffer * refObj;
	SDL_Texture * GPUMemory;
	SDL_Surface * CPUMemory;
	SDL_Rect textureRect;

	int width;
	int height;

};

