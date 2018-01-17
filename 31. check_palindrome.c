#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// declare le function.
int checkPalindrome(int* a, int i);

int main(void)
{
	int palindrome;
	int MAX_SIZE = 200;
	int a[MAX_SIZE];
	int i = 0;
	int bool_count_array_size = 1;
	
	printf("Please enter your array of values:\n");
	printf("(Enter a negative number to stop entering values)\n");
	printf("(Sample array: 1 2 3 2 1 -1)\n");
	i = 0;
	// This whole thing is used to get the number of input values.
	// That number is then used to create a constant called MAX_SIZE.
	while (bool_count_array_size == 1)
	{
		scanf("%d", &a[i]);
		// If we get a negative number from the user,
		// we exit the while loop and define a constnat MAX_SIZE with the i.
		if (a[i] < 0)
		{
			#define MAX_SIZE i
			bool_count_array_size = 0;
		}
		else
			i++;
	}
	
	// Calls the function to get the boolean value of palindrome and stores
	// it in the palindrome too.
	palindrome = checkPalindrome(a, i);
	
	if (palindrome == 0)
		printf("\nThe array is not a palindrome sequence.\n");
	else
		printf("\nThe array is a palindrome sequence.\n");
	
	return 0;
}

// defines le function.
int checkPalindrome(int* a, int i)
{
	int j;
	int palindrome;
	
	// checks if the LHS and RHS are always the equal.
	for (j = 0; j < MAX_SIZE; j++)
	{
		// If they are, continue.
		if ( a[j] == a[MAX_SIZE - j - 1] )
			continue;
		// If we found one that isn't equal, we break and set the palindrome
		// to false.
		else
		{
			palindrome = 0;
			break;
		}
	}
	
	// Let's say we went through the for loop without setting the palindrome to
	// false, we are sure that j will definitely be equal to MAX_SIZE.
	// Hence, we can use this as a condition to set palindrome to true.
	if (j == MAX_SIZE)
		palindrome = 1;
	
	// In either case, we return the boolean value of palindrome.
	return palindrome;
}
