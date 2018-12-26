#pragma once
class Transform
{
public:
	Transform();
	~Transform();

	float x;
	float y;
	float rotation;

	float veloctiyX;
	float velocityY;
	float velocityRotation;

	int layer;

	void setPosition(float x, float y, float rotation);
	void addVelocity(float x, float y, float rotation);
};

