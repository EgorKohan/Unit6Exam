#include <iostream>
#include "Shop.h"
#include "Administrator.h"

using namespace std;


int main() {
	Shop shop("KPABT", 1);
	Administrator admin("Egor", shop);
	admin.addProductIntoShop();
	admin.addProductIntoShop();
	admin.addProductIntoShop();
	admin.addProductIntoShop();
}