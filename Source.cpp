#include <iostream>
#include "Shop.h"
#include "Administrator.h"
#include "Customer.h"
#include "AdministratorMenu.h"


using namespace std;


int main() {
	Shop shop("KPABT", 1);
	Administrator admin("Egor", shop);
	AdministratorMenu adminM(admin);
	adminM.launchAdministratorMenu();


}