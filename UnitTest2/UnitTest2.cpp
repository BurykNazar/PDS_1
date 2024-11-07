#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab1_2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestDisjunction)
		{
			string bitset1 = "01001100";
			string bitset2 = "10011110";
			string expectedDisjunction = "11011110";
			Assert::AreEqual(getDisjunction(bitset1, bitset2), expectedDisjunction);
		}

		TEST_METHOD(TestConjunction)
		{
			string bitset1 = "01001100";
			string bitset2 = "10011110";
			string expectedConjunction = "00001100";
			Assert::AreEqual(getConjunction(bitset1, bitset2), expectedConjunction);
		}

		TEST_METHOD(TestExcConj)
		{
			string bitset1 = "01001100";
			string bitset2 = "10011110";
			string expectedExcConj = "11010010";
			Assert::AreEqual(getExcConj(bitset1, bitset2), expectedExcConj);
		}
	};
}
