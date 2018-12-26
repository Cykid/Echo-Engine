#pragma once
#include "Transform.h"
#include "SpriteRenderer.h"
#include "reffer.h"
#include "collider2D.h"
#include <string>

class GameObject
{
public:
	//Init and Exit
	GameObject();
	GameObject(reffer* _refObj);
	virtual ~GameObject();

	//Propertys
	std::string tag;

	//Components
	Transform * transform;
	SpriteRenderer * spriteRenderer;
	reffer * refObj;
	collider2D * collider;

	bool active = true;

	//Object Functions
	void updateObject();

	//Fixed Funktions
	virtual void logik();
	virtual void draw();
	virtual void save();
	virtual void load();
	virtual void onCollide(GameObject * coll);

	//Getter / Setter
};

