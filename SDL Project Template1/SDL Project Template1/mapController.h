#pragma once
#include <vector>
using namespace std;
class mapController
{
public:
	mapController(int _width, int _height);
	~mapController();
	int width;
	int height;
	vector< vector<int> > map;
	

};

