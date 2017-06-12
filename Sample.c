#include "SampleInclude.h"

/******************************************************************************/
/* Function to unit test */
/******************************************************************************/
int Factorial(int n)
{
	int returnValue = 0;

	if (n > 0)
	{
		returnValue = n;
		while (n != 0)
		{
			returnValue = multiply(n, returnValue);
		}
	}

	return returnValue;
}

/******************************************************************************/
/* Function to unit test */
/******************************************************************************/
int Fibonacci(int n)
{
	int returnValue = 0;

	if (n > 1)
	{
		int previousValue = 1;
		int nextValue;

		for (int i = 1; i < n; i++)
		{
			nextValue = addition(previousValue, returnValue);
			previousValue = returnValue;
			returnValue = nextValue;
		}
	}

	return returnValue;
}

