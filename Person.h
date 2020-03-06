#pragma once
#include <iostream>

using namespace std;

class Person {
	string name;
public:
	Person(string name) {
		this->name = Functions::checkWord(name);
	}
	string getName() { return name; }

	void setName(string newName) { name = Functions::checkWord(newName); }

};