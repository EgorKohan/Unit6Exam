#pragma once
#include "Shop.h"


class ShopAction {
public:
	static void showParfumMas(Shop shop) {
		Parfum* mas = shop.getParfumMas();
		if (shop.getCurrentCountOfParfum() == 0) {
			cout << "Shop showcase is empty.\n";
		}
		else {
			for (int i = 0; i < shop.getCurrentCountOfParfum(); i++)
			{
				cout << "Parfum: " << mas[i].getName() << ". Volume: " << mas[i].getVolume() << ". Cost: " << mas[i].getCost() << endl;
			}
		}
	}
};