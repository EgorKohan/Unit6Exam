#include <iostream>
#pragma warning(disable:4290)
#include "Shop.h"
#include "Administrator.h"
#include "Customer.h"
#include "AdministratorMenu.h"
#include "CustomerMenu.h"


using namespace std;


int main() {
	Shop *KPABT = new Shop("KRABT", 20);
	Customer customer("Egor", 300);
	Administrator admin("Admin", KPABT);
	int choise;
	do
	{
		system("cls");
		cout << "1 - Administrator menu\n2 - Customer menu\n3 - Exit\nChoose variant: ";
		cin >> choise;
		switch (choise)
		{
		case 1: {
			try
			{
				AdministratorMenu* adminM = new AdministratorMenu(&admin);
				adminM->launchAdministratorMenu();
				delete adminM;
				adminM = nullptr;
			}
			catch (const std::domain_error& e)
			{
				cout << e.what() << endl;
			}
			break;
		}
		case 2: {
			try
			{
				CustomerMenu* customerM = new CustomerMenu(&customer, KPABT);
				customerM->launchCustomerMenu();
				delete customerM;
				customerM = nullptr;
				break;
			}
			catch (const std::domain_error& e)
			{
				cout << e.what() << endl;
			}
		}
		case 3: {
			break;
		}
		default:
			cin.clear();
			rewind(stdin);
			break;
		}
	} while (choise != 3);


}

