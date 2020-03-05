#include <iostream>
#include "Shop.h"
using namespace std;


int main() {
	Shop shop("KPABT", 1);
	try
	{
		shop.addNewParfum(Parfum("Dior", 105.0f, 100));
		shop.addNewParfum(Parfum("Dior", 105.0f, 100));
		shop.addNewParfum(Parfum("Dior", 105.0f, 100));
	}
	catch (const std::exception& e )
	{
		cout << e.what() << endl;
	}
}