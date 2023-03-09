#include "Monster.h"
Monster::Monster() {}

int Monster::getHealth() { return this->health; }
int Monster::getDamage() { return this->damage; }
int Monster::getViewRange() { return this->view_range; }

void Monster::setHealth(int health) { this->health = health; }
void Monster::setDamage(int damage) { this->damage = damage; }
void Monster::setViewRange(int view_range) { this->view_range = view_range; }
