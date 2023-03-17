#pragma once
#include "Action.h"
class HeroAlgorithm
{
public:

	HeroAlgorithm(int initial_x, int initial_y);

	virtual Action heroTurn();

private:
	int x_pos;
	int y_pos;
	int health = 20;
	
	int hammer_charges = 5;
	int scythe_charges = 5;
	int bow_charges = 5;

};

