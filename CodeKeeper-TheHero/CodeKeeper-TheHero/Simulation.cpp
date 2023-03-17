#include "Simulation.h"
Simulation::Simulation(int map_id)
{
	Simulation::loadMap(map_id);
	Simulation::generateEnemies();
	Simulation::generateItems();
	Simulation::setupPlayer();
}

void Simulation::setAlgorithm(HeroAlgorithm selected_algorithm)
{
	this->selected_algorithm = selected_algorithm;
}

Simulation::simCondition Simulation::step() 
{
	return Simulation::simCondition::NEUTRAL;
}

Simulation::simCondition Simulation::runForSteps(int step_count)
{
	for (int i = 0; i < step_count; i++) 
	{
		Simulation::simCondition current_condition = this->step();

		if (current_condition != Simulation::simCondition::NEUTRAL)
		{
			return current_condition;
		}

	}
}

void Simulation::generateItems() 
{

}

void Simulation::setupPlayer() {}

void Simulation::collectItem() {}

void Simulation::generateEnemies() 
{

}
void Simulation::moveEnemies() 
{

}

bool Simulation::randomlyChooseMap() { return true; }

bool Simulation::loadMap(int map_id) 
{
	if (map_id == -1) { return Simulation::randomlyChooseMap(); }
	if (map_id > MAXIMUM_MAP_ID) { return false; }
	return false;
}

Simulation::simCondition Simulation::checkSimState() { return Simulation::simCondition::NEUTRAL; }
void Simulation::debugOutput() {}

void Simulation::displayHyperparameters() {}

