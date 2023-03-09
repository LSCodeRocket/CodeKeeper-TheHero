#pragma once
#include <iostream>
#include <vector>
#include "Monster.h"
#include "Item.h"
#include "HeroAlgorithm.h"


class Simulation
{
public:

	enum simCondition { WON, DEATH, NEUTRAL };

	Simulation();
	
	void step();
	void runForSteps(int step_count);
	
	void generateItems();
	void collectItem();

	void generateEnemies();
	void moveEnemies();

	void randomlyChooseMap();
	int getMapID();
	void setMapID(int map_id);
	bool loadMap();

	int getSimulationID();
	void setSimulationID(int simulation_id);

	simCondition checkSimState();

	void debugOutput();
	void displayHyperparameters();
	
private:
	std::vector<Monster> monsters;
	std::vector<Item> items;

	int map_id;
	int simulation_id;
	HeroAlgorithm selected_algorithm;

};

