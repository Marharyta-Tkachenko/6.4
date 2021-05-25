#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab_6.4\Lab_6.4\6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 5, 5, 7, -2, -55, 5, 8, 88, -536 };
			Assert::AreEqual(IndexOfElem(arr, size(arr), 88), 8);
		}
	};
}
