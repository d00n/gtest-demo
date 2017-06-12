#include "SampleInclude.h"
#include "Sample.h"
#include "GtestHelper.h"

unsigned int MultiplyInvokeCount = 0;
unsigned int AdditionInvokeCount = 0;

/******************************************************************************/
/* Google Test C Helpers */
/******************************************************************************/
void Sample_Factorial(void)
{
	MultiplyInvokeCount = 0;

	ExpectEqual(0, Factorial(-1));
	ExpectEqual(0, MultiplyInvokeCount);

	ExpectEqual(0, Factorial(0));
	ExpectEqual(0, MultiplyInvokeCount);

	ExpectEqual(1, Factorial(1));
	ExpectEqual(0, MultiplyInvokeCount);

	ExpectEqual(2, Factorial(2));
	ExpectEqual(1, MultiplyInvokeCount);

}

void Sample_Fibonacci(void)
{
	AdditionInvokeCount = 0;

	ExpectEqual(0, Fibonacci(-1));
	ExpectEqual(0, AdditionInvokeCount);

	ExpectEqual(0, Fibonacci(0));
	ExpectEqual(0, AdditionInvokeCount);

	ExpectEqual(0, Fibonacci(1));
	ExpectEqual(0, AdditionInvokeCount);

	ExpectEqual(1, Fibonacci(2));
	ExpectEqual(1, AdditionInvokeCount);
	AdditionInvokeCount = 0;

	ExpectEqual(1, Fibonacci(3));
	ExpectEqual(2, AdditionInvokeCount);

}

/******************************************************************************/
/* C function stubs */
/******************************************************************************/
int multiply(int x, int y)
{
	MultiplyInvokeCount++;
	return x * y;
}

int addition(int x, int y)
{
	AdditionInvokeCount++;
	return x + y;
}

