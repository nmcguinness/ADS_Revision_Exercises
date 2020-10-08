#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_Revision_Exercises/functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RevisionExercisesTests
{
	TEST_CLASS(RevisionExercisesTests)
	{
	public:
		
		TEST_METHOD(TestDummyPass)
		{
			int result = dummy(12, 3.14);
			Assert::AreEqual(result, -1);
		}

		TEST_METHOD(TestSwapPtrsPass)
		{
			int x = 10;
			int y = 200;

			int* pX = &x;
			int* pY = &y;

			swapPtrs(pX, pY);

			Assert::IsTrue(*pX == 200);
			Assert::IsTrue(*pY == 10);
		}


		TEST_METHOD(TestDivideAllPass)
		{
			float result = divideAll(2, 3, 4);
			float expected = (2 / 3) / 4;
			Assert::AreEqual(result, expected);
		}

		//complete this code to test for exception (Hint: see PPT on TDD and divide example)
		TEST_METHOD(TestMultiplyDivideByZeroFail)
		{
			//float result = divideAll(2, 0, 4);
			
		}
	};
}
