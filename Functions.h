#pragma once
#include <iostream>
#include <regex>
using namespace std;

class Functions {
public:
	static string checkWord(string str) throw(invalid_argument){
		regex rx("[A-z]+");
		if (regex_match(str, rx)) {
			return str;
		}
		throw invalid_argument("String should contain only letters.\n");
	}

};