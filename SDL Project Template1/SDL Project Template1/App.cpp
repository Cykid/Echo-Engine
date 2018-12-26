// App.cpp
#include "App.h"

App::App(string NAME, unsigned short int WIDTH, unsigned short int HEIGHT)
{
	if ((Init(NAME, WIDTH, HEIGHT)) == false)
	{
		debugFile.write("Program failed to initialized... Now closing.");
		return;
	}
}

App::~App()
{
	SDL_DestroyWindow(gWindow);
	// Free any surfaces you create
	// SDL_FreeSurface(<Surface_Name>);
	SDL_Quit();
}

bool App::Init(string NAME, unsigned short int WIDTH, unsigned short int HEIGHT)
{
	bool bInit = true;

	SCREEN_WIDTH = WIDTH;
	SCREEN_HEIGHT = HEIGHT;
	APP_NAME = NAME;

	if ((SDL_Init(SDL_INIT_VIDEO)) < 0)
	{
		debugFile.write("SDL failed to initialize! Error: ");
		debugFile.write(SDL_GetError());
		bInit = false;
	}

	gWindow = SDL_CreateWindow(APP_NAME.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL);

	if (gWindow == NULL)
	{
		debugFile.write("Failed to create window. Error: ");
		debugFile.write(SDL_GetError());
		bInit = false;
	}

	gScreenSurf = SDL_GetWindowSurface(gWindow);

	if (gScreenSurf == NULL)
	{
		debugFile.write("Failed to create Surface Screen. Error: ");
		debugFile.write(SDL_GetError());
		bInit = false;
	}
	// debugFile.write("testing");
	// SDL_Delay(2000);
	return bInit;
}

int App::GameLoop()
{
	while (QUIT_GAME == false)
	{
		while (SDL_PollEvent(&gEvent) != 0)
		{
			if (gEvent.type == SDL_QUIT)
			{
				QUIT_GAME = true;
			}
			// else do stuff
		}
	}
	return 0;
}