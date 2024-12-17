#include "BladedWeapon.h"

void BrokenBottle::hit(){
	std::cout << "вы ударили кого-то по голове бутылкой (не факт что врага)" << std::endl;
	this->Strength -= 1;
}

void BrokenBottle::fix(){
	Strength = MaxStrength;
}

int BrokenBottle::getDamage(){
	return damage;
}

void Hammer::hit(){
	std::cout << "вы ударили молотом" << std::endl;
	this->Strength -= 1;
}

void Hammer::fix(){
	Strength = MaxStrength;
}

int Hammer::getDamage(){
	return damage;
}

void Knife::hit(){
	std::cout << "вы пырнули ножом" << std::endl;
	this->Strength -= 1;
}

void Knife::fix(){
	Strength = MaxStrength;
}

int Knife::getDamage(){
	return damage;
}