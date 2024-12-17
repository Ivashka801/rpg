#include "Gun.h"

void Pistol::shoot(){
	std::cout << "вы выстрелили из пистолета" << std::endl;
}

void Pistol::reload(){
	cartridges = maxCartridges;
}

int Pistol::getDamage(){
	return damage;
}

void RocketLauncher::shoot(){
	std::cout << "ты бабахнул из базуки" << std::endl;
}

void RocketLauncher::reload(){
	cartridges = maxCartridges;
}

int RocketLauncher::getDamage(){
	return damage;
}
