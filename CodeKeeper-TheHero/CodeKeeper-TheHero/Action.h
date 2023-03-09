#pragma once

#include <iostream>
#include <string>

enum weapon {
	SWORD, HAMMER, SCYTHE, BOW
};

struct Action {
	int x_target;
	int y_target;

	weapon chosen_weapon;
	
	std::string message;
};