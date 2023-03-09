#pragma once
#include "Action.h"
class HeroAlgorithm
{
public:

	HeroAlgorithm();
	virtual Action heroTurn();

private:
	int x_pos;
	int y_pos;
	int health;
	
	int hammer_charges;
	int scythe_charges;
	int bow_charges;

};

