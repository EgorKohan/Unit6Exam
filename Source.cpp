#include <iostream>
#include "Parfum.h"
using namespace std;


int main() {
	Parfum parfum("Dior", 105.0f, 100);
	try
	{
	parfum.setCost(-5);
	}
	catch (const std::exception& e)
	{
		cout << e.what()  << endl;
	}

}