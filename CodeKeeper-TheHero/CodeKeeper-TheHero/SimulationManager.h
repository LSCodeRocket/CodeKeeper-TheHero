#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <thread>
#include <string>

class SimulationManager
{
public:

	SimulationManager(int thread_number, int test_number);

	void initializeThreads();
	void generateMaps();

private:

	int test_number = 100;
	int thread_number = 4;

	std::vector<std::thread> simultaneous_simulations;
	
	std::vector<std::vector<std::vector<int>>> maps;

};

