#include "BladedWeapon.h"

void BrokenBottle::hit(){
	std::cout << "�� ������� ����-�� �� ������ �������� (�� ���� ��� �����)" << std::endl;
	this->Strength -= 1;
}

void BrokenBottle::fix(){
	Strength = MaxStrength;
}

int BrokenBottle::getDamage(){
	return damage;
}

void Hammer::hit(){
	std::cout << "�� ������� �������" << std::endl;
	this->Strength -= 1;
}

void Hammer::fix(){
	Strength = MaxStrength;
}

int Hammer::getDamage(){
	return damage;
}

void Knife::hit(){
	std::cout << "�� ������� �����" << std::endl;
	this->Strength -= 1;
}

void Knife::fix(){
	Strength = MaxStrength;
}

int Knife::getDamage(){
	return damage;
}