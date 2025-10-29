#include "pch.h"
#include "CppUnitTest.h"
#include "..\gitpr6.1it\gitpr6.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestIter
{
    TEST_CLASS(UnitTestIter)
    {
    public:

        TEST_METHOD(TestCountAndSum)
        {
            int a[] = { 10, -3, 7, 0, 5, 8, -2, 15, 20, 1, -5, 3, 4, 6, -1, 25, 9, 11, 0, 12 };
            int n = sizeof(a) / sizeof(a[0]);
            int count = 0, sum = 0;

            countAndSum(a, n, count, sum);

            Assert::AreEqual(11, count);
            Assert::AreEqual(93, sum);
        }

        TEST_METHOD(TestReplaceWithZero)
        {
            int a[] = { 10, -3, 7, 0, 5, 8, -2, 15, 20, 1, -5, 3, 4, 6, -1, 25, 9, 11, 0, 12 };
            int expected[] = { 10, -3, 0, 0, 0, 8, -2, 0, 0, 0, -5, 0, 0, 0, -1, 25, 0, 0, 0, 0 };
            int n = sizeof(a) / sizeof(a[0]);

            replaceWithZero(a, n);

            for (int i = 0; i < n; i++) {
                Assert::AreEqual(expected[i], a[i]);
            }
        }
    };
}