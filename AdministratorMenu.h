#pragma once
#include "Administrator.h"
#include "ShopAction.h"

class AdministratorMenu {
	Administrator* admin;

	int displayLaunchInfo() {
		int choise;
		cout << "1 - Display administrator info\n2 - Add new parfum into shop\n3 - Display shop parfum list\n4 - Exit\nChoose variant: ";
		cin >> choise;
		return choise;
	}

public:

	AdministratorMenu(Administrator& admin) {
		this->admin = &admin;
	}

	void launchAdministratorMenu() throw(exception) {
		int choise;
		do
		{
			system("cls");
			choise = displayLaunchInfo();
			switch (choise)
			{
			case 1: {
				cout << "Administator name: " + admin->getName() + '\n' +
					"Administator shop: " + admin->getShop().getName() + '\n';
				break;
			}
			case 2: {
				admin->addProductIntoShop();
				break;
			}
			case 3: {
				ShopAction::showParfumMas(admin->getShop());
				break;
			}
			case 4: {
				//choise for exit
				break;
			}
			default:
				cin.clear();
				cin.sync();
				rewind(stdin);
				cout << "Incorrect input\n";
				break;
			}
			system("pause");
		} while (choise != 4);
	}

	void setNewAdmin(Administrator& newAdmin) {
		admin = &newAdmin;
	}
};