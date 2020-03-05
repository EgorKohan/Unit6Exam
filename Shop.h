#pragma once
#include <iostream>
#include "Parfum.h"
using namespace std;

class Shop {
	string name;
	int countOfParfums;
	int currentCountOfParfum;
	Parfum *parfumMas;
public:
	Shop(string name, int countOfParfums) {
		this->name = name;
		if (countOfParfums < 0) throw length_error("Count of parfums can't be negative.");
		this->countOfParfums = countOfParfums;
		parfumMas = new Parfum[countOfParfums];
		currentCountOfParfum = 0;
	}

	string getName() { return name; };

	Parfum* getParfumMas() { return parfumMas; }

	void addNewParfum(Parfum newParfum) {
		if (currentCountOfParfum > countOfParfums) throw range_error("Array out of bounds");
		parfumMas[currentCountOfParfum] = newParfum;
		currentCountOfParfum++;
	}

};