#pragma once
#include "Person.h"
#include "Shop.h"
#include "ShopAction.h"

class Customer : public Person {
	float money;
public:
	Customer(string name, float money) : Person(name){
		this->money = money;
	}

	float getMoney() { return money; }

	void setMoney(float newMoney) { money = newMoney; }

	void buyParfum(Shop& shop) {
		ShopAction::showParfumMas(shop);

	}
};