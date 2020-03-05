#pragma once
#include "Person.h"

class Customer : public Person {
	float money;
public:
	Customer(string name, float money) : Person(name){
		this->money = money;
	}


};