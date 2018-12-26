#include "colliderWall.h"



colliderWall::colliderWall()
{
}

colliderWall::colliderWall(reffer * _refObj)
{
	this->refObj = _refObj;
	this->transform = new Transform();
	this->spriteRenderer = new SpriteRenderer(_refObj);
	this->refObj = _refObj;
	this->collider = new collider2D(this->transform);
	this->tag = "Wall";

	this->spriteRenderer->loadImage("wall.bmp");
	this->transform->setPosition(600, 64, 0);
}


colliderWall::~colliderWall()
{
}

void colliderWall::logik()
{
	this->updateObject();
}

void colliderWall::draw()
{
	GameObject * camPtr = (GameObject*)this->refObj->mainCamera;
	float posX = this->transform->x - camPtr->transform->x;
	float posY = this->transform->y - camPtr->transform->y;
	float posR = this->transform->rotation - camPtr->transform->rotation;
	this->spriteRenderer->renderSprite(posX, posY, posR);
	SDL_SetRenderDrawColor(this->refObj->renderer, 0, 255, 0, 0);
	SDL_RenderDrawRect(this->refObj->renderer, this->collider->collisionBox);

}

void colliderWall::save()
{
}

void colliderWall::load()
{
}

void colliderWall::onCollide(GameObject * coll)
{
	if (coll->tag == "Player")
	{
		
	}
}
