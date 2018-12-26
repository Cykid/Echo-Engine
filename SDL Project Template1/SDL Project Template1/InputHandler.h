#pragma once
#include "reffer.h"
#include <iostream>
#include "GameObject.h"
using namespace std;
class InputHandler
{
public:
	InputHandler();
	InputHandler(reffer* _refObj);

	reffer * refObj;

	void logic();

	~InputHandler();
};

