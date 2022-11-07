// ADS_2022_CA1_V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SHOW_DEBUG

#include <iostream>
#include "Functions.h"

int main()
{
	string data = "xbcdefgz";	char target = 'a';	int frequency = 0;
	countOccurences(data, target, frequency);
	cout << "The frequency of " << target << " is " << frequency << endl;

#pragma region Connect To DB
	int x = 10;
	//...
#pragma endregion

#ifdef SHOW_DEBUG
	std::cout << "some debug data";
#endif // NIALL
}