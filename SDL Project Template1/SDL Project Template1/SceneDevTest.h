#pragma once
#include "Scene.h"
#include "reffer.h"
#include "GOManager.h"
#include "collisionManager.h"
class SceneDevTest :
	public Scene
{
public:
	SceneDevTest::SceneDevTest();
	SceneDevTest(reffer* _refObj);

	InputHandler * inputStream;

	void sceneLogik() override;
	collisionManager * cM;

	~SceneDevTest();
};

