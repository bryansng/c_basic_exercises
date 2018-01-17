#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// NOTE: If you change N, you would also have to change the data set so that it accommodates the large N, else, zero will conquer the loop. Note that your input values will have to be smaller than MAX_SIZE.
#define N 16
#define MAX_SIZE 1000000
int main(void)
{
	printf("Program that prints only the value that occurs more than (N/2)+1 times.\n\n");
	int value;
	int i;
	int a[N] = {0};
	int count[MAX_SIZE] = {0};
	int already_listed[MAX_SIZE] = {0};
	
	// opens file, store values into a[N], closes file.
	FILE *fp;
	fp = fopen("floats3.txt", "r");
	for (i = 0; i < N; i++)
	{
		fscanf(fp, "%d", &a[i]);
	}
	fclose(fp);
	
	// Prints the array from the file
	printf("Array from file:\n");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	// Increase the count for that particular value in the array count[]
	for (i = 0; i < N; i++)
	{
		value = a[i];
		if (a[i] == value)
		{
			count[(int)(a[i])]++;
		}
	}
	
	// Prints the count array to show how it works. For Debugging purposes.
	/*printf("\n");
	for (i = 0; i < N; i++)
		printf("%d: %d\n", i, count[i]);
	printf("\n");*/
	
	// Check if it is greater than (N/2) + 1, if it is, print just ONCE.
	for (i = 0; i < N; i++)
	{
		if ( count[a[i]] > ((N/2) + 1 ) )
		{
			if ( !(already_listed[a[i]] >= 1) )
			{
				if (!(a[i] == 0))
				{
					printf("\nThe value %d occurred, %d times.", a[i], count[a[i]]);
					already_listed[a[i]]++;
				}
				else
					continue;
			}
			else
				continue;
		}
	}
	// tl;dr Total Number of Operations: N.
	
	// Number of Operations:
	// In terms of the array where a[] = {1,2,3,4,5,...,N}, the number of operations the algorithm executes before it is sure there is no such value is when it is finish looping everything. So then number of total operations is N.
	
	
	
	// tl;dr Time Complexity = 6N, Space Complexity = 3N + 2.
	// Conclusion: Time and Space complexity is linear.
	
	// Linear Explanation:
	// If you consider the operation loops, which is the last two for loops, they loop through N times each. The last for loop carries one assignment operation, the 2nd last for loop carries two assignments operations. Hence the time complexity is 2N*3 = 6N.
	// The algorithm uses 3N integers to store a[], count[] and already_listed[] and 2 more to store i and value. Hence the space complexity is 3N + 2.
	
	printf("\n\n\n\n\nExplanation of Linear Time and space and total operations are explained in comments.");
	
	
	
	return 0;
}


