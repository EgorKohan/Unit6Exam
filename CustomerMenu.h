#pragma once
#include "Customer.h"

class CustomerMenu {
	Customer* customer;
	Shop* customerShop;
	int displayLaunchInfo() {
		int choise;
		cout << "1 - Display customer info\n2 - Buy parfum\n3 - Exit\nChoose variant: ";
		cin >> choise;
		return choise;
	}

public:

	CustomerMenu(Customer* customer, Shop* shop) throw(domain_error) {
		if (customer == nullptr || shop == nullptr) throw domain_error("Domain error(CustomerMenu)");
		this->customer = customer;
		this->customerShop = shop;
	}

	void launchCustomerMenu() {
		int choise;
		do
		{
			system("cls");
			choise = displayLaunchInfo();
			switch (choise)
			{
			case 1: {
				cout << "Customer name: " << customer->getName() << endl;
				cout << "Customer money: " << customer->getMoney() << endl;
				break;
			}
			case 2: {
				customer->buyParfume(customerShop);
			}
			case 3: {
				break;
			}
			default: {
				cin.clear();
				cin.sync();
				rewind(stdin);
				break;
			}
			}
			system("pause");
		} while (choise != 3);
	}
};