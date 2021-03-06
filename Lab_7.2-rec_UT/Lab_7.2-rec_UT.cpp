﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.2-r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab72recUT
{
	TEST_CLASS(Lab72recUT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int t;
			int rowCount = 2;
			int colCount = 3;
			int** P = new int* [colCount];
			for (int j = 0; j < colCount; j++)
				P[j] = new int[rowCount];
			P[0][0] = 1;
			P[0][1] = 2;
			P[0][2] = 4;

			P[1][0] = 3;
			P[1][1] = 0;
			P[1][2] = 5;

			t = rowMin(P, colCount, 0, P[0][0],0);
			Assert::AreEqual(t, 1);


		}
	};
}
