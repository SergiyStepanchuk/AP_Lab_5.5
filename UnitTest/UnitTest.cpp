#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(met_a)
		{
			int d;
			a(4, 1, d);
			Assert::AreEqual(d, 4, L"Incorrect method a!");
		}
	};
}
