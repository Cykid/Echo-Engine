#pragma once
#include "GOManager.h"
#include "GameObject.h"
#include <list>
#include <stdlib.h>
class collisionManager
{
public:
	collisionManager();
	~collisionManager();

	GOManager * goManager;
	std::list<GameObject*>::iterator aIT;
	std::list<GameObject*>::iterator bIT;

	
	void checkCollision();

};

