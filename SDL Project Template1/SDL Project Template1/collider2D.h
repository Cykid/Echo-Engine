#pragma once
#include <SDL.h>
#include "Transform.h"
class collider2D
{
public:
	collider2D();
	collider2D(Transform * _transform);
	~collider2D();

	bool active = false;
	float offsetX = 0;
	float offsetY = 0;
	float offsetPosX = 0;
	float offsetPosY = 0;
	Transform * transform;
	SDL_Rect * collisionBox;
};

