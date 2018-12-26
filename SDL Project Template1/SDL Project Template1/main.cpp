// main.cpp
// SDL2 x86
// All code can be redestributed.
// Nick Stapleton - 2016
/* http://lazyfoo.net/tutorials/SDL/index.php */

#include "App.h"
#include "reffer.h"
#include "Scene.h"
#include "SceneDevTest.h"


int main(int argc, char* argv[])
{
	//App SDL_APP("SDL_Tutorial", 1280, 720);
	reffer * refObj = new reffer();
	
	SceneDevTest* sceneDev = new SceneDevTest(refObj);
	sceneDev->sceneLogik();
	



	return -1;
	//return SDL_APP.GameLoop();
}