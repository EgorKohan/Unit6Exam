#pragma once
#include <iostream>
#include <regex>
#include "Functions.h"
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

	Parfum(string name, float cost, int volume) throw(invalid_argument){
		if (volume <= 0 || cost <= 0) throw invalid_argument("Parfum can't be initialized.\n");
		this->name = Functions::checkWord(name);
		this->cost = cost;
		this->volume = volume;
	}

	string getName() { return name; }
	
	float getCost() { return cost; }

	void setCost(float newCost) throw(invalid_argument) { 
		if (newCost <= 0) throw invalid_argument("Cost cant't be negative");
		cost = newCost; 
	}

	int getVolume() { return volume; }

};