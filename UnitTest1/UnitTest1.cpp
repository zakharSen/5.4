#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double F;
			F = S0(4);
			
			Assert::AreEqual(F, 3.68991,0.00001);

		}
	};
}
