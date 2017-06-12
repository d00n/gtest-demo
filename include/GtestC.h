#ifndef GTEST_C_H

#define GTEST_C_H

#include "gtest/gtest.h"

#define C_TEST(TestCase, Test) \
	extern "C" \
{ \
	void TestCase##_##Test(void); \
} \
TEST(TestCase, Test) \
{ \
	TestCase##_##Test(); \
}

#endif //ndef GTEST_C_H
