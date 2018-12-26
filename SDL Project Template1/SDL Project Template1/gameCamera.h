#pragma once
#include "GameObject.h"

class gameCamera :
	public GameObject
{
public:
	gameCamera();
	gameCamera(reffer* _refObj);
	~gameCamera()
	{

	}

	void logik()	override;
	void draw()		override;
	void save()		override;
	void load()		override;
	void onCollide(GameObject * coll) override;
};

