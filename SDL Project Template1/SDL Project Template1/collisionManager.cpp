#include "collisionManager.h"



collisionManager::collisionManager()
{
}


collisionManager::~collisionManager()
{
}

void collisionManager::checkCollision()
{
	this->aIT = this->goManager->GBList.begin();
	
	SDL_Rect * result = new SDL_Rect();

	while (this->aIT != this->goManager->GBList.end())
	{
		this->bIT = this->goManager->GBList.begin();
		GameObject * a = *this->aIT;
		
		while (this->bIT != this->goManager->GBList.end())
		{
			GameObject * b = *this->bIT;

			if (a != b)
			{				
				if (SDL_IntersectRect(a->collider->collisionBox, b->collider->collisionBox, result))
				{
					a->onCollide(b);
					b->onCollide(a);
				}
				else {
					
				}
			}
			else
			{
		
			}
			
			this->bIT++;
		}
		this->aIT++;
	}
}
