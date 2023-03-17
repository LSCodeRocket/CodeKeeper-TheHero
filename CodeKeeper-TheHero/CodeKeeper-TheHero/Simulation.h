#pragma once
#include <iostream>
#include <vector>
#include "Monster.h"
#include "Item.h"
#include "HeroAlgorithm.h"

const int MAXIMUM_MAP_ID = 0;

class Simulation
{
public:

	enum simCondition { WON, DEATH, NEUTRAL };

	Simulation(int map_id);
	
	void setAlgorithm(HeroAlgorithm selected_algorithm);

	simCondition step();
	simCondition runForSteps(int step_count);
	
	void generateItems();
	void collectItem();

	void generateEnemies();
	void moveEnemies();

	bool randomlyChooseMap();
	bool loadMap(int map_id);

	simCondition checkSimState();

	void debugOutput();
	void displayHyperparameters();

	void setupPlayer();
	
private:
	std::vector<Monster> monsters;
	std::vector<Item> items;

	std::vector<std::vector<int>> map;
	std::vector<int> exit_position;

	HeroAlgorithm selected_algorithm;

};

