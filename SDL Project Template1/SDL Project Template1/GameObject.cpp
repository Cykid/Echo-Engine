#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(reffer * _refObj)
{
	this->transform = new Transform();
	this->spriteRenderer = new SpriteRenderer(_refObj);
	this->refObj = _refObj;
	this->collider = new collider2D(this->transform);
}

GameObject::~GameObject()
{
}

void GameObject::updateObject()
{
	//Update CollisionBox
	this->collider->collisionBox->h = this->spriteRenderer->height + this->collider->offsetY;
	this->collider->collisionBox->w = this->spriteRenderer->width + this->collider->offsetX;
	this->collider->collisionBox->x = this->transform->x + this->collider->offsetPosX;
	this->collider->collisionBox->y = this->transform->y + this->collider->offsetPosY;
}

void GameObject::logik()
{
}

void GameObject::draw()
{
}

void GameObject::save()
{
}

void GameObject::load()
{
}

void GameObject::onCollide(GameObject * coll)
{
}
