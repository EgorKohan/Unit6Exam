#pragma once
#include "Person.h"
#include "Shop.h"

class Administrator : public Person {
	Shop *administratorShop;

public:
	Administrator(string name, Shop* shop)  throw (domain_error) : Person(name){
		if(shop == nullptr) throw domain_error("Domain error(Administrator)");
		this->administratorShop = shop;
	};

	//need to move to AdministratorAction
	Parfum* createNewParfum(){
		string str;
		float cost;
		int volume;
		cout << "Input the name of parfum: ";
		cin >> str;
		cout << "Input the cost of parfum: ";
		cin >> cost;
		cout << "Input the volume of parfum: ";
		cin >> volume;
		return new Parfum(str, cost, volume);
	}

	//need to move to AdministratorAction
	void addProductIntoShop() {
		try
		{
			administratorShop->addNewParfum(createNewParfum());
		}
		catch (const range_error& e)
		{
			cout << e.what() << endl;
		}
		catch (const invalid_argument & e )
		{
			cout << e.what() << endl;
		}
		catch (const domain_error& e) {
			cout << e.what() << endl;
		}
	}

	void setNewShop(Shop* newShop) throw(domain_error){
		if (newShop == nullptr) throw domain_error("Domain error(Administrator)");
		administratorShop = newShop;
	}

	Shop getShop() {
		return *administratorShop;
	}

};