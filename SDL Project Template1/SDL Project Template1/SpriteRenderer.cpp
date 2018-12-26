#include "SpriteRenderer.h"

SpriteRenderer::SpriteRenderer(reffer * _refObj)
{
	this->refObj = _refObj;
}

SpriteRenderer::~SpriteRenderer()
{
}


void SpriteRenderer::loadImage(std::string path)
{
	
	this->CPUMemory = IMG_Load(path.c_str());
	if (this->CPUMemory == nullptr) {

	}
	
	this->width = this->CPUMemory->w;
	this->height = this->CPUMemory->h;
	

	this->GPUMemory = SDL_CreateTextureFromSurface(this->refObj->renderer, this->CPUMemory);

	SDL_FreeSurface(this->CPUMemory);
}

void SpriteRenderer::renderSprite(float posX,float posY,float angle)
{
	this->textureRect.h = this->height;
	this->textureRect.w = this->width;

	this->textureRect.x = posX;
	this->textureRect.y = posY;

	SDL_Point centerPoint = { this->height / 2 , this->width / 2 };

	SDL_RenderCopyEx(this->refObj->renderer, this->GPUMemory, NULL, &this->textureRect, angle, &centerPoint, SDL_FLIP_NONE);
	

	//SDL_RenderCopy(this->refObj->renderer, this->GPUMemory, NULL, &this->textureRect);
}
