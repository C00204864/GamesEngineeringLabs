#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\\AssertProject\main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestCheckNumberRange)
		{
			char * argv1[] = { "Anything", "2", "3", "4", "5", "6", "43" };
			char * argv2[] = { "Anything", "111", "3", "4", "5", "6", "7" };
			char * argv3[] = { "Anything", "-2", "3", "4", "5", "6", "7" };
			char * argv4[] = { "Anything", "0", "3", "4", "5", "6", "789" };
			Assert::AreEqual(true, checkNumberRange(7, 1, argv1));
			Assert::AreEqual(false, checkNumberRange(7, 1, argv2));
			Assert::AreEqual(false, checkNumberRange(7, 1, argv3));
			Assert::AreEqual(false, checkNumberRange(7, 1, argv4));
		}

		TEST_METHOD(TestCheckRepetition)
		{
			char * argv1[] = { "Anything", "2", "3", "4", "5", "6", "43" };
			char * argv2[] = { "Anything", "2", "2", "4", "5", "6", "7" };
			Assert::AreEqual(true, checkRepetition(7, 1, argv1));
			Assert::AreEqual(false, checkRepetition(7, 1, argv2));
		}
	};
}