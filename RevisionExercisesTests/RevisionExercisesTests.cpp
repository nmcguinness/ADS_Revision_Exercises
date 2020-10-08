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

		TEST_METHOD(TestDummyFail)
		{
		}
	};
}
