#include <iostream>
#include "Shop.h"
#include "Administrator.h"
#include "Customer.h"
#include "AdministratorMenu.h"
#include "CustomerMenu.h"


using namespace std;


int main() {
	Shop shop("KPABT", 1);
	Administrator admin("Egor", shop);
	AdministratorMenu adminM(admin);
	adminM.launchAdministratorMenu();
	Customer customer("Andrey", 200.0f);
	CustomerMenu customerM(customer, shop);
	customerM.launchCustomerMenu();
}

