#include "InputHandler.h"



InputHandler::InputHandler()
{
}

InputHandler::InputHandler(reffer * _refObj)
{
	this->refObj = _refObj;
}


InputHandler::~InputHandler()
{
}

void InputHandler::logic() {
	GameObject * cam = static_cast<GameObject *>(this->refObj->mainCamera);

	switch (this->refObj->eventHandler.type)
		{
			case SDL_KEYDOWN:
				switch (this->refObj->eventHandler.key.keysym.sym) {
					case SDLK_a:
						cam->transform->addVelocity(5, 0, 0);
					case SDLK_d:
						cam->transform->addVelocity(5, 0, 0);
					case SDLK_w:
						cam->transform->addVelocity(0, -5, 0);
					case SDLK_s:
						cam->transform->addVelocity(0, 5, 0);




				}

				break;
		}
	}
