#pragma once
#include "Person.h"
#include "ShopAction.h"

class Customer : public Person {
	float money;
public:
	Customer(string name, float money) : Person(name) {
		if (money < 0) throw invalid_argument("Count of money can't be negative");
		this->money = money;
	}

	float getMoney() { return money; }

	void setMoney(float newMoney) throw(invalid_argument){
		if (newMoney < 0) throw invalid_argument("Not enough money");
		money = newMoney;
	}

	Parfum chooseParfum(Shop* shop) throw(domain_error){
		if (shop == nullptr) throw domain_error("Domain error(Shop)");
		ShopAction::showParfumMas(*shop);
		string nameOfParfume;
		cin >> nameOfParfume;
		Functions::checkWord(nameOfParfume);
		Parfum* mas = shop->getParfumMas();
		for (int i = 0; i < shop->getCurrentCountOfParfum(); i++)
		{
			if (mas[i].getName() == nameOfParfume) {
				return mas[i];
			}
		}
		throw invalid_argument("Perfum not found");
	}

	void buyParfume(Shop* shop) throw(domain_error) {
		if (shop == nullptr) throw domain_error("Domain error(Shop)");
		try
		{
			Parfum customerChoise = chooseParfum(shop);
			/*if (money < customerChoise.getCost()) cout << "Not enough money\n";
			else {
				money -= customerChoise.getCost();
			}*/
			setMoney(money - customerChoise.getCost());
		}
		catch (invalid_argument e)
		{
			cout << e.what() << endl;
		}

	}

};