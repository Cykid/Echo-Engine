#include "Transform.h"



Transform::Transform()
{
	this->x = 0.f;
	this->y = 0.f;
	this->rotation = 0.f;
}


Transform::~Transform()
{
}

void Transform::setPosition(float x, float y, float rotation)
{
	this->x = x;
	this->y = y;
	this->rotation = rotation;

	if (this->rotation > 360) { this->rotation = 0; }
	if (this->rotation < 0) { this->rotation = 360; }
}

void Transform::addVelocity(float x, float y, float rotation)
{
	this->setPosition(this->x + x, this->y + y, this->rotation + rotation);

	this->veloctiyX = x;
	this->velocityY = y;
	this->velocityRotation = rotation;
}
