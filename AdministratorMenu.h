#pragma once
#include "Administrator.h"

class AdministratorMenu {
	Administrator *admin;

	int displayLaunchInfo() {
		int choise;
		cout << "1 - Display administrator info\n2 - Add new parfum into shop\n3 - Exit\nChoose variant: ";
		cin >> choise;
		if (choise < 0 || choise > 3) {
			throw out_of_range("Incorrect choose");
		}
		return choise;
	}

	string firstCaseAction() {
		cout << "Administator name: " << admin->getName() << endl;
		cout << "Administator shop: " << admin->getShopName() << endl;
	}

public:

	AdministratorMenu(Administrator& admin) {
		this->admin = &admin;
	}

	void launchAdministratorMenu() throw(exception) {
		int choise;
		do
		{
			choise = displayLaunchInfo();
			switch (choise)
			{
			case 1: {
				cout << firstCaseAction();
				break;
			}
			case 2: {
				admin->addProductIntoShop();
				break;
			}
			case 3: {
				break;
			}
			default:
				break;
			}
		} while (choise != 3);
	}

	void setNewAdmin(Administrator& newAdmin) {
		admin = &newAdmin;
	}
};