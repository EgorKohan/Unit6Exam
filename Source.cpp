#include <iostream>

using namespace std;

class Student {

	string name;
	string surname;

public:

	Student() {};

	Student(string name, string surname) :name(name), surname(surname) {};

};

int main() {
	cout << "Hello";
	Student *stu = new Student("Egor", "Kohan");
}