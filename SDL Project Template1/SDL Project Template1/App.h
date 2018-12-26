// App.h
#ifndef _APP_H_
#define	_APP_H_

#include <SDL.h>
#include "dbFile.h"

/// <summary> SDL Application. Constructor takes program name and resolution. </summary>
class App
{
public:
	/// <summary> Creates an SDL program. Program name, and resolution. </summary>
	App(string NAME, unsigned short int WIDTH, unsigned short int HEIGHT);

	/// <summary> Main game loop. Returns 0 if the main application exits properly </summary>
	int	GameLoop();

	/// <summary> Cleanup for a generic SDL application. </summary>
	~App();

private:
	/// <summary> Initiliazes SDL, creates a Window, and Surface Window. Returns false if SDL failed to Init, or if the Window failed to create. </summary>
	bool Init(string NAME, unsigned short int WIDTH, unsigned short int HEIGHT);

	// Debug file used for debugging program errors. The application can be run with the console sub-system, instead.
	dbFile				debugFile;
	// Variables used for SDL
	string				APP_NAME		= "\0";
	unsigned short int	SCREEN_WIDTH	= 800;
	unsigned short int	SCREEN_HEIGHT	= 600;
	bool				QUIT_GAME		= false;
	SDL_Window*			gWindow			= NULL;
	SDL_Surface*		gScreenSurf		= NULL;
	SDL_Event			gEvent;
};

#endif // !_APP_H_