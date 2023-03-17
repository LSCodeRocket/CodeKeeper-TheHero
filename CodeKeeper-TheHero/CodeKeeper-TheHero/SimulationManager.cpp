#include "SimulationManager.h"

void runSimulations(SimulationManager& base_manager, int test_number)
{

}

SimulationManager::SimulationManager(int thread_number, int test_number) 
{
	this->test_number = test_number;
	this->thread_number = thread_number;

}

void SimulationManager::initializeThreads()
{
	for (int i = 0; i < thread_number; i++)
	{
		simultaneous_simulations.push_back(std::thread(runSimulations, this, test_number));
	}
	for (int i = 0; i < thread_number; i++)
	{
		simultaneous_simulations[i].join();
	}
}

void SimulationManager::generateMaps()
{
	std::ifstream map_file("Maps.txt");
	std::string map_text;
	while (std::getline(map_file, map_text)) {
		if (map_text.length() == 0) 
		{
		}
	}
}
