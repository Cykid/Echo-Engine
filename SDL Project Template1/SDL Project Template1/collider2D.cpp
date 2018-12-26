#include "collider2D.h"



collider2D::collider2D()
{
}

collider2D::collider2D(Transform * _transform)
{
	this->transform = _transform;
	this->active = false;
	this->collisionBox = new SDL_Rect();
}


collider2D::~collider2D()
{
}
