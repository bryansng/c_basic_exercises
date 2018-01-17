#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// Declares le function.
int returnLargest(int* a, int i, int k);

int main(void)
{
	int MAX_SIZE = 200;
	int a[MAX_SIZE];
	int i = 0, k;
	int bool_count_array_size = 1;
	int kth_largest_value;
	
	printf("Please enter your array of values:\n");
	printf("(Enter a negative number to stop entering values)\n");
	printf("(Sample array: 1 2 3 4 5 6 -1)\n");
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
	
	printf("\nPlease enter the kth largest value in the array:\n");
	scanf("%d", &k);
	
	kth_largest_value = returnLargest(a, i, k);
	
	if (kth_largest_value != 0)
		printf("\nThe kth largest value in the array is %d\n", kth_largest_value);
	else
		printf("\nk is zero\nPlease choose another k value.\n");
	
	return 0;
}

// Defines le function.
int returnLargest(int* a, int i, int k)
{
	int j = 0;
	int h = 0;
	int max_index, max, tmp;
	
	for (j = 0; j < k; j++)
	{
		// We randomly let a value to be our max and that value's index as
		// our index.
		max = a[j];
		max_index = j;
		
		// Inner loop used for going through the array to find a value that
		// is greater than outer loop's max.
		//
		// If it is greater, then we assign that that value as the new max,
		// and the max_index with the value's index.
		for (h = j + 1; h < MAX_SIZE; h++)
		{
			if (a[h] > max)
			{
				max = a[h];
				max_index = h;
			}
		}
		
		// After each pass, we swap a[j] with that a[max_index]
		tmp = a[j];
		a[j] = a[max_index];
		a[max_index] = tmp;
	}
	
	// After all that, we should have an array that is ordered
	// from large to small but only up to k.
	if (k == 0)
		return 0;
	else
		return a[k-1];
}











