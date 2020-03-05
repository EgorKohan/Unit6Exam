#pragma once
#include "Person.h"
#include "Shop.h"

class Administrator : public Person {
	Shop *administratorShop;
public:
	Administrator(string name, Shop& shop) : Person(name) {
		this->administratorShop = new Shop(shop);
	};

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
		try
		{
			return Parfum(str, cost, volume);
		}
		catch (const std::exception& e)
		{
			cout << e.what() << endl;
		}
	}

	void addProductIntoShop() {
		try
		{
			administratorShop->addNewParfum(createNewParfum());
		}
		catch (const range_error& e)
		{
			cout << "Product did't add.\n";
			cout << e.what() << endl;
		}
	}

	void setNewShop(Shop& newShop) {
		administratorShop = &newShop;
	}

	string getShopName() { return administratorShop->getName(); }

};