#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define MAX_SIZE 100	// Assume its yee big.

// Declare le function.
void prints_prime_factors(int N);

int main(void)
{
	int N;
	
	// Gets the user input for N.
	printf("Please enter the value N to find its prime factorization:\n");
	scanf("%d", &N);
	printf("\n");
	
	// Calls the function that will print the prime factors within
	// the called function itself.
	prints_prime_factors(N);
	
	return 0;
}

// Define le function.
void prints_prime_factors(int N)
{
	int i;	// Counter.
	
	printf("Prime Factors:\n");
	// i starts with 2, because 0 and 1 is not a prime number.
	//
	// Starting with 0 and 1 will just mess up the results.
	for (i = 2; i < MAX_SIZE; i++)
	{
		// If N is still divisible by i, then keep going and keep
		// printing the value of i until the result can't be divisible
		// by i anymore.
		//
		// In that case, it will move on to the next value of i.
		while (N % i == 0)
		{
			printf("%d ", i);
			N = N / i;
		}
	}
}







