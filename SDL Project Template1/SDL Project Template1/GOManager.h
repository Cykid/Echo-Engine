#pragma once
#include <list>
#include <iterator>
#include "GameObject.h"
#include <string>

//Include all Game Objects
#include "reffer.h"
#include "Player.h"
#include "colliderWall.h"
#include "gameCamera.h"

class GOManager
{
public:
	GOManager(reffer* _refObj);
	~GOManager();

	std::list<GameObject*> GBList;
	std::list<GameObject*>::iterator GBIt;
	reffer* refObj;

	GameObject* addObj(std::string objName);
	void logik();
	void render();
	
	void registerCam(GameObject * _cam);
};

