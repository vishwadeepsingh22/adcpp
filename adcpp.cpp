//============================================================================
// Name        : adcpp.cpp
// Author      : Vishwadeep
// Version     :
// Copyright   : GNU Public Licence
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
//using namespace std;

int hello = 10;

void callfunction () {
	std::cout << hello << std::endl;
	return;
}

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	int *hellop;
	hellop = &hello;
	callfunction();
	*hellop = 100;
	std::cout << *hellop << std::endl;
	return 0;
}
