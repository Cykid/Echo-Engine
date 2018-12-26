#pragma once
#include "Transform.h"
#include "SpriteRenderer.h"
#include "reffer.h"

#include "GameObject.h"
class colliderWall :
	public GameObject
{
public:
	colliderWall();
	colliderWall(reffer* _refObj);
	~colliderWall();

	void logik()	override;
	void draw()		override;
	void save()		override;
	void load()		override;
	void onCollide(GameObject * coll) override;
};

