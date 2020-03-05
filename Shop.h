#pragma once
#include <iostream>
#include "Parfum.h"
using namespace std;

class Shop {
	string name;
	int countOfParfums;
	Parfum *parfumMas;
public:
	Shop(string name, int countOfParfums) {
		this->name = name;
		this->countOfParfums = countOfParfums;
		parfumMas = new Parfum[countOfParfums];
	}

	string getName() { return name; };

	Parfum* getParfumMas() { return parfumMas; }
};