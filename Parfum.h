#pragma once
#include <iostream>
using namespace std;

class Parfum {
	string name;
	float cost;
	int volume;
public:
	Parfum(string name, float cost, int volume) {
		this->name = name;
		this->cost = cost;
		this->volume = volume;
	}

	string getName() { return name; }
	
	float getCost() { return cost; }

	void setCost(float newCost) { cost = newCost; }

	int getVolume() { return volume; }

};