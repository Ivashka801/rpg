#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

#include "Gun.h"
#include "BladedWeapon.h"

//база для персонажей
class ICharacter {
public:
	virtual void takeWeapon() = 0;
	virtual void shootWeapon() = 0;
};

//танк
class Tank : public ICharacter {
public:

private:
	int HP = 150;
	int MaxHP = 200;
};

//стрелок
class Shooter : public ICharacter {
public:

private:

};

//алкаш(а почему бы и нет? :) )
class Drunk : public ICharacter {
public:

private:

};

#endif //CHARACTER_H