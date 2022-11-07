#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_2022_CA1_V1/Functions.h"
#include "../ADS_2022_CA1_V1/Television.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022CA1V1
{
	TEST_CLASS(TESTSADS2022CA1V1)
	{
	public:

#pragma region MERGE_ARRAY_TESTS

		TEST_METHOD(testMergeArraysEqualLength)
		{
			//input
			int dataArrA[3] = { 1, 2, 3 };
			int lengthA = 3;

			int dataArrB[3] = { 4, 5, 6 };
			int lengthB = 3;

			//output
			int dataArrC[6] = { 0, 0, 0, 0, 0, 0 };  //should end as {1, 2, 3, 4, 5, 6}
			int lengthC = 6;

			int target[6] = { 1, 2, 3, 4, 5, 6 };

			// your code goes here.
			mergeArray(dataArrA, lengthA, dataArrB, lengthB, dataArrC);

			for (auto i = 0; i < lengthC; i++)
				Assert::AreEqual(dataArrC[i], target[i]);
		}

		TEST_METHOD(testMergeArraysDifferentLength)
		{
			//input
			int dataArrA[3] = { 1, 2, 3 };
			int lengthA = 3;

			int dataArrB[6] = { 4, 5, 6, 7, 8, 9 };
			int lengthB = 6;

			//output
			int dataArrC[9] = { 0, 0, 0, 0, 0, 0 };  //should end as {1, 2, 3, 4, 5, 6}
			int lengthC = 9;

			int target[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

			// your code goes here.
			mergeArray(dataArrA, lengthA, dataArrB, lengthB, dataArrC);

			for (auto i = 0; i < lengthC; i++)
				Assert::AreEqual(dataArrC[i], target[i]);

			// your code goes here.
		}

#pragma endregion

		TEST_METHOD(testTelevisionNotNull)
		{
			//instanciate a new Television object and test that the object is initalized correctly
			string make = "samsung";
			Television t1(make, 1299, 1920, 500);

			Television* pt1 = &t1;

			//your code goes here...
			Assert::IsNotNull(pt1);
		}

		TEST_METHOD(testTelevisionNotEqual)
		{
			//instanciate two different and distinct Television objects and use the != operator to test that they are NOT equal
			string make = "samsung";
			Television t1(make, 1299, 1920, 500);

			make = "LG";
			Television t2(make, 1299, 1920, 500);

			//your code goes here...
			bool result = t1 != t2;
			Assert::AreEqual(true, result);
		}
	};
}