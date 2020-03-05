#pragma once
#include "Person.h"
#include "Shop.h"

class Administrator : public Person {
public:
	Parfum createNewParfum() {
		string str;
		float cost;
		int volume;
		cout << "Input the name of parfum: ";
		cin >> str;
		cout << "Input the cost of parfum: ";
		cin >> cost;
		cout << "Input the volume of parfum: ";
		cin >> volume;
		return Parfum(str, cost, volume);
	}

	void addProductIntoShop(Shop& shop) {
		shop.addNewParfum(createNewParfum());
	}
};