#include "gtest/gtest.h"

extern "C"
{
#include "GtestHelper.h"
}

/******************************************************************************/
extern "C" void ExpectTrue(unsigned int expected)
{
	EXPECT_TRUE(expected != 0);
}

/******************************************************************************/
extern "C" void ExpectEqual(unsigned int expected, unsigned int actual)
{
	EXPECT_EQ(expected, actual);
}

