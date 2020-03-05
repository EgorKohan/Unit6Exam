#pragma once
#include "Shop.h"


class ShopAction {
public:
	static void showParfumMas(Shop shop) {
		Parfum* mas = shop.getParfumMas();
		for (int i = 0; i < shop.getCurrentCountOfParfum(); i++)
		{
			cout << "Parfum: " << mas[i].getName() << ". Volume: " <<mas[i].getVolume() << ". Cost: " << mas[i].getCost() << endl;
		}
	}
};