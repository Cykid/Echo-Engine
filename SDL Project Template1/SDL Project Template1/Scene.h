#pragma once
#include <SDL.h>
#include "GOManager.h"
#include "GameObject.h"
#include "reffer.h"
#include <string>
#include "InputHandler.h"

class Scene
{
public:
	Scene();
	Scene(reffer* _refObj);
	std::string sceneName;
	virtual void sceneLogik();

	reffer* refObj;
	GOManager * goManager;

	~Scene();
};

