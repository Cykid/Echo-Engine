#pragma once
#include "Transform.h"
#include "SpriteRenderer.h"
#include "reffer.h"
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	Player();

	Player(reffer* _refObj);

	~Player()
	{
	}

	bool direction;

	void logik()	override;
	void draw()		override;
	void save()		override;
	void load()		override;
	void onCollide(GameObject * coll) override;
};

