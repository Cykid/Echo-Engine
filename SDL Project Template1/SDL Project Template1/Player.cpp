#include "Player.h"



Player::Player()
{
}

Player::Player(reffer * _refObj)
{
	this->refObj = _refObj;
	this->transform = new Transform();
	this->spriteRenderer = new SpriteRenderer(_refObj);
	this->refObj = _refObj;
	this->collider = new collider2D(this->transform);

	this->spriteRenderer->loadImage("player.bmp");
	this->transform->setPosition(64, 64, 32);

	this->tag = "Player";
	this->direction = true;
}


void Player::logik()
{
	this->updateObject();
	if (direction == true) {
		this->transform->addVelocity(2, 0, 1);
	}
	else {
		this->transform->addVelocity(-2, 0, -1);
	}
}

void Player::draw()
{
	GameObject * camPtr = (GameObject*)this->refObj->mainCamera;
	float posX = this->transform->x - camPtr->transform->x;
	float posY = this->transform->y - camPtr->transform->y;
	float posR = this->transform->rotation - camPtr->transform->rotation;
	this->spriteRenderer->renderSprite(posX, posY,posR);
	SDL_SetRenderDrawColor(this->refObj->renderer, 0, 255, 0, 0);
	SDL_RenderDrawRect(this->refObj->renderer, this->collider->collisionBox);
}

void Player::save()
{
}

void Player::load()
{
}

void Player::onCollide(GameObject * coll)
{
	//coll->transform->addVelocity(0, 1.2, 0);
	//this->active = false;
	if (coll->tag == "Wall") {
		this ->transform->addVelocity(-50, 0, 0);
	}
	
}
