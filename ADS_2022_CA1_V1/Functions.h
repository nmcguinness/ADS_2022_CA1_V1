#pragma once
//pre-compiler directive
#include <string>
using namespace std;

void mergeArray(int* pArr1, int length1,
	int* pArr2, int length2, int* pArrOut)
{
	//exception checks later
	if (pArr1 == nullptr)
		throw std::invalid_argument("One or more is null");

	//copy the first array
	//length1 is 4...0 -> 3
	for (auto i = 0; i < length1; i++)
		pArrOut[i] = pArr1[i];

	//copy the second array
	//length2 is 5...start at 4 -> 8
	for (auto i = 0; i < length2; i++)
		pArrOut[i + length1] = pArr2[i];
}

/// <summary>
/// Counts the frequency of occurence
/// </summary>
/// <param name="data">Original string (e.g. "abcdea")</param>
/// <param name="target">Target string (e.g. "a")</param>
void countOccurences(string data, char target, int& frequency)
{
	if (data.length() == 0)			//1. when do i finish?
		return;
	else
	{
		if (data[0] == target) 		//2. when do i call myself?
			frequency++;

		countOccurences(data.substr(1), target, frequency);
	}
}
