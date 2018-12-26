#include "SceneDevTest.h"


void SceneDevTest::sceneLogik()
{
	//Instatiate 
	bool engineRun = true;
	
	//Device Controller
	this->inputStream = new InputHandler(this->refObj);

	//Add Camera
	this->goManager->registerCam(this->goManager->addObj("Camera"));

	//Actors
	this->goManager->addObj("Player")->transform->addVelocity(-32,64,0);
	this->goManager->addObj("Player")->transform->addVelocity(-32, 128, 0);
	this->goManager->addObj("Player")->transform->addVelocity(-32, 0, 0);
	this->goManager->addObj("Player")->transform->addVelocity(-32, -10, 0);
	this->goManager->addObj("Player")->transform->addVelocity(-32, -21, 0);
	this->goManager->addObj("Wall");


	this->cM = new collisionManager();
	this->cM->goManager = this->goManager;

	//Main Loop
	while (engineRun)
	{
		//Proxy the Input to the Inputhandler
		while (SDL_PollEvent(&this->refObj->eventHandler) != 0)
		{
			if (this->refObj->eventHandler.type == SDL_QUIT) {
				engineRun = false;
			}
			else {
				this->inputStream->logic();
			}
		}

		SDL_SetRenderDrawColor(this->refObj->renderer, 0, 0, 0, 0);

		SDL_RenderClear(this->refObj->renderer);

		//Check Collisions
		this->cM->checkCollision();


		//Run GameObjects
		this->goManager->logik();

		this->goManager->render();

		//Show Screen
		SDL_RenderPresent(this->refObj->renderer);		
	}	
}



SceneDevTest::SceneDevTest()
{

}

SceneDevTest::SceneDevTest(reffer * _refObj)
{
	this->refObj = _refObj;
	this->goManager = new GOManager(_refObj);
}


SceneDevTest::~SceneDevTest()
{
}
