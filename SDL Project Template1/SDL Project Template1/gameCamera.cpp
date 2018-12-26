#include "gameCamera.h"



gameCamera::gameCamera()
{
}

gameCamera::gameCamera(reffer * _refObj)
{
	this->refObj = _refObj;
	this->transform = new Transform();
	this->spriteRenderer = new SpriteRenderer(_refObj);
	this->collider = new collider2D(this->transform);
	this->transform->setPosition(-100, 0, 0);
	this->tag = "Camera";
}




void gameCamera::logik()
{
	
}

void gameCamera::draw()
{
}

void gameCamera::save()
{
}

void gameCamera::load()
{
}

void gameCamera::onCollide(GameObject * coll)
{
}
