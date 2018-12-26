
#pragma once
#include <list>

class node
{
public:
	node();
	~node();

	bool walkable = true;

	int g;
	int h;
	int f;

	node * parent;
	std::list<node*> neighbors;
	


};

