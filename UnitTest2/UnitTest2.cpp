#include "pch.h"
#include "CppUnitTest.h"
#include "..\gitpr6.1it\gitpr6.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProcessArray
{
    TEST_CLASS(UnitTestProcessArray)
    {
    public:

        TEST_METHOD(TestProcessArraySingle)
        {
            int arr[] = { 5, 3, -2, 7, 10 };
            int n = sizeof(arr);

            processArray(arr, n);


            Assert::AreEqual(5, arr[0]);
            Assert::AreEqual(0, arr[1]);
            Assert::AreEqual(-2, arr[2]);
            Assert::AreEqual(0, arr[3]);
            Assert::AreEqual(10, arr[4]);
        }
    };
}