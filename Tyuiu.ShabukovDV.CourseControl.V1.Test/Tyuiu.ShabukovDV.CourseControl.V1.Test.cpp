#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ShabukovDV.CourseControl.V1.Lib/Tyuiu.ShabukovDV.CourseControl.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* res = new Service1();
			int x = 0;
			int y = 1;
			int z = 2;
			int c = res->Rezultat(x, y, z);
			Assert::AreEqual(4, c);
		}
	};
}
