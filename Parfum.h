#pragma once
#include <iostream>
using namespace std;

class Parfum {
	string name;
	float cost;
	int volume;
public:
	Parfum() {
		cost = 0;
		volume = 0;
	}

	Parfum(string name, float cost, int volume) {
		this->name = name;
		if (cost <= 0) throw runtime_error("Parfum can't be initialized/\n Cost can't be negative.");
		this->cost = cost;
		if (volume <= 0) throw runtime_error("Parfum can't be initialized/\n Cost can't be negative.");
		this->volume = volume;
	}

	string getName() { return name; }
	
	float getCost() { return cost; }

	void setCost(float newCost) throw(invalid_argument) { 
		if (newCost < 0) throw invalid_argument("Cost cant't be negative");
		cost = newCost; 
	}

	int getVolume() { return volume; }

};