#ifndef BLADEDWEAPON_H
#define BLADEDWEAPON_H

#include <iostream>

class IBladedWeapon{
public:
	virtual void hit() = 0;
	virtual void fix() = 0;
	virtual int getDamage() = 0;
};

class BrokenBottle : public IBladedWeapon{
public:
	void hit() override;
	void fix() override;
	int getDamage() override;
private:
	int Strength = 40;
	int MaxStrength = 50;
	int damage = 10;
};

class Hammer : public IBladedWeapon {
public:
	void hit();
	void fix();
	int getDamage();
private:
	int Strength = 225;
	int MaxStrength = 300;
	int damage = 15;
};

class Knife : public IBladedWeapon {
public:
	void hit();
	void fix();
	int getDamage();
private:
	int Strength = 75;
	int MaxStrength = 100;
	int damage = 40;
};

#endif //BLADEDWEAPON_H