#pragma once
#ifndef GUN_H
#define GUN_H

#include <iostream>

class IGun {
public:
	virtual void shoot() = 0;
	virtual void reload() = 0;
	virtual int getDamage() = 0;
};

//пистолет
class Pistol : public IGun {
public:
	void shoot();
	void reload();
	int getDamage();
private:
	int cartridges = 7;
	int	maxCartridges = 10;
	int damage = 5;

};

//автомат
class MachineGun : public IGun {
public:
	void shoot();
	void reload();
	int getDamage();

private:
	int cartridges = 23;
	int	maxCartridges = 30;
	int damage = 10;

};

//ракетница
class RocketLauncher : public IGun {
public:
	void shoot();
	void reload();
	int getDamage();

private:
	int cartridges = 1;
	int	maxCartridges = 3;
	int damage = 50;

};

#endif //GUN_H