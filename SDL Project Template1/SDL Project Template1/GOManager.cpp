#include "GOManager.h"

GOManager::GOManager(reffer * _refObj)
{
	this->refObj = _refObj;
}

GOManager::~GOManager()
{
}

GameObject* GOManager::addObj(std::string objName)
{
	if (objName == "Player")
	{
		GameObject * tmp = new Player(this->refObj);
		GBList.push_back(tmp);

		return tmp;
	}

	if (objName == "Wall")
	{
		GameObject * tmp = new colliderWall(this->refObj);
		GBList.push_back(tmp);

		return tmp;
	}
	if (objName == "Camera") {
		GameObject * tmp = new gameCamera(this->refObj);
		GBList.push_back(tmp);

		return tmp;
	}
}

void GOManager::logik()
{
	this->GBIt = this->GBList.begin();
	while (this->GBIt != this->GBList.end())
	{
		if ((*this->GBIt)->active == true){
			(*this->GBIt)->logik();
		}
		this->GBIt++;
	}
}

void GOManager::render()
{
	this->GBIt = this->GBList.begin();
	while (this->GBIt != this->GBList.end())
	{
		if ((*this->GBIt)->active == true) {
			(*this->GBIt)->draw();
		}
		this->GBIt++;
	}
}

void GOManager::registerCam(GameObject * _cam)
{
	this->refObj->mainCamera = _cam;
}
