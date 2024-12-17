#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

#include "Gun.h"
#include "BladedWeapon.h"

//���� ��� ����������
class ICharacter {
public:
	virtual void takeWeapon() = 0;
	virtual void shootWeapon() = 0;
};

//����
class Tank : public ICharacter {
public:

private:
	int HP = 150;
	int MaxHP = 200;
};

//�������
class Shooter : public ICharacter {
public:

private:

};

//�����(� ������ �� � ���? :) )
class Drunk : public ICharacter {
public:

private:

};

#endif //CHARACTER_H