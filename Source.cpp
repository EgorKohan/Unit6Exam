#include <iostream>
#include "Shop.h"
#include "Administrator.h"
#include "Customer.h"

using namespace std;


int main() {
	Shop shop("KPABT", 1);
	Administrator admin("Egor", shop);
	try
	{
	shop.addNewParfum(Parfum("Dior", 105.5f, 100));
	shop.addNewParfum(Parfum("Dior", 105.5f, 100));
	shop.addNewParfum(Parfum("Dior", 105.5f, 100));
	shop.addNewParfum(Parfum("Dior", 105.5f, 100));
	}
	catch (const std::exception& e )
	{
		cout << e.what() << endl;
	}
	Customer Egor("Egor", 100);
	Egor.buyParfum(shop);

}