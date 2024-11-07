#include "pch.h"
#include "CppUnitTest.h"
#include"..\Lab1_1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestConjunctRes)
		{
			Assert::AreEqual(conjunctRes(true, true), true);
			Assert::AreEqual(conjunctRes(true, false), false);
			Assert::AreEqual(conjunctRes(false, true), false);
			Assert::AreEqual(conjunctRes(false, false), false);
		}

		TEST_METHOD(TestDisjunctionRes)
		{
			Assert::AreEqual(disjunctionRes(true, true), true);
			Assert::AreEqual(disjunctionRes(true, false), true);
			Assert::AreEqual(disjunctionRes(false, true), true);
			Assert::AreEqual(disjunctionRes(false, false), false);
		}

		TEST_METHOD(TestExcConjRes)
		{
			Assert::AreEqual(excConjRes(true, true), false);
			Assert::AreEqual(excConjRes(true, false), true);
			Assert::AreEqual(excConjRes(false, true), true);
			Assert::AreEqual(excConjRes(false, false), false);
		}

		TEST_METHOD(TestFirstImplRes)
		{
			Assert::AreEqual(firstImplRes(true, true), true);
			Assert::AreEqual(firstImplRes(true, false), false);
			Assert::AreEqual(firstImplRes(false, true), true);
			Assert::AreEqual(firstImplRes(false, false), true);
		}

		TEST_METHOD(TestSecImplRes)
		{
			Assert::AreEqual(secImplRes(true, true), true);
			Assert::AreEqual(secImplRes(true, false), true);
			Assert::AreEqual(secImplRes(false, true), false);
			Assert::AreEqual(secImplRes(false, false), true);
		}

		TEST_METHOD(TestEqualityRes)
		{
			Assert::AreEqual(equalityRes(true, true), true);
			Assert::AreEqual(equalityRes(true, false), false);
			Assert::AreEqual(equalityRes(false, true), false);
			Assert::AreEqual(equalityRes(false, false), true);
		}
	};
}
