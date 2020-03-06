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
	Shop(string name, int countOfParfums) throw(invalid_argument) {
		if (countOfParfums < 0) throw invalid_argument("Count of parfums can't be negative.");
		this->name = Functions::checkWord(name);
		this->countOfParfums = countOfParfums;
		parfumMas = new Parfum[countOfParfums];
		currentCountOfParfum = 0;
	}

	Shop(const Shop& obj) {
		this->name = obj.name;
		this->countOfParfums = obj.countOfParfums;
		this->currentCountOfParfum = obj.currentCountOfParfum;
		this->parfumMas = new Parfum(*obj.parfumMas);
	}
	
	string getName() { return name; };

	int getCurrentCountOfParfum() { return currentCountOfParfum; }

	Parfum* getParfumMas() { return parfumMas; }
	
	//need to move to ShopAction
	void addNewParfum(Parfum* newParfum) throw(range_error, domain_error) {
		if (newParfum == nullptr) throw domain_error("Domain error");
		if (currentCountOfParfum >= countOfParfums) throw range_error("Array out of bounds");
		parfumMas[currentCountOfParfum] = *newParfum;
		currentCountOfParfum++;
	}

};