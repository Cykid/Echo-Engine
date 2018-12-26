#include "mapController.h"





mapController::mapController(int _width, int _height)
{
	this->width = _width;
	this->height = _height;
	this->map.resize(this->width, vector<int>(this->height));
}

mapController::~mapController()
{
}
