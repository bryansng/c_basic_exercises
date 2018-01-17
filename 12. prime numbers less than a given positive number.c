#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <stdlib.h>
int main(void)
{
	int i = 0, j = 0, counter = 0;  // counters.
	int N;   // the number the prime numbers should be smaller than.
	
	// gets the N from the user.
	printf("Specify positive number N for the prime numbers to be smaller than.\nN: ");
	scanf("%d", &N);
	
	#define N N   // makes N a constant with its own value.
	
	int a[N];   // creates an array with that size.
	
	// outer loop contains the main values that will be added to a[].
	for (i = 0; i <= N; i++)
	{
		// inner loop is used to divide the main values from the outer loop.
		for (j = 2; j <= i; j++)
		{
			// if main value is divisible by a number, break.
			//
			// E1
			// i = 4
			// j = 2
			// Loop will stop.
			//
			// E2
			// i = 2
			// j = 2
			// Loop will stop.
			if ( i % j == 0)
				// stops the inner for loop.
				break;
		}
		// if main value is equal to the number,
		// in other words,
		// if main value is only divisible by itself, goes through statements.
		//
		// i.e.
		// E1
		// i = 2
		// j = 2
		// Goes through statement.
		//
		// E2
		// i = 4
		// j = 2
		// Ignores.
		if (j == i)
			// increments the counter so that in the next iteration,
			// the i can be stored in a[] properly.
			a[counter++] = i;
	}
	
	// prints out the array storing the prime numbers.
	for (i = 0; i < counter; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
