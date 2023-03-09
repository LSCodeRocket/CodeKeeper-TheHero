#pragma once
class Monster
{
public:
	Monster();

	int getHealth();
	void setHealth(int health);
	int getDamage();
	void setDamage(int damage);
	int getViewRange();
	void setViewRange(int view_range);

private:
	int health;
	int damage;
	int view_range;
};

