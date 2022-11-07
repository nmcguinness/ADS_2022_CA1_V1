// ADS_2022_CA1_V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SHOW_DEBUG

#include <iostream>
#include "Functions.h"

void countOccurences(string data, char target, int& frequency)
{
	if (data.length() == 0)			//1. when do i finish?
		return;
	else
	{
		if (data[0] == target) 		//2. when do i call myself?
			frequency++;
		countOccurences(data.substr(0), target, frequency);
	}
}

int main()
{
	string data = "abcedef";	char target = 'a';	int frequency = 0;
	countOccurences(data, target, frequency);
	cout << "The frequency of " << target << " is " << frequency;

#pragma region Connect To DB
	int x = 10;
	//...
#pragma endregion

#ifdef SHOW_DEBUG
	std::cout << "some debug data";
#endif // NIALL
}