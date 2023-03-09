#include "Simulation.h"
Simulation::Simulation() {}

void Simulation::step() {}
void Simulation::runForSteps(int step_count) {}

void Simulation::generateItems() {}
void Simulation::collectItem() {}

void Simulation::generateEnemies() {}
void Simulation::moveEnemies() {}

void Simulation::randomlyChooseMap() {}
int Simulation::getMapID() { return 0; }
void Simulation::setMapID(int map_id) {}
bool Simulation::loadMap() { return false; }

int Simulation::getSimulationID() { return 0; }
void Simulation::setSimulationID(int simulation_id) {}

Simulation::simCondition Simulation::checkSimState() { return Simulation::simCondition::NEUTRAL; }
void Simulation::debugOutput() {}

void Simulation::displayHyperparameters() {}

