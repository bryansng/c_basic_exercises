#include <stdio.h>
/* 
	Written by Neil Hurley (neil.hurley@ucd.ie), modified by "Sng Hong Yao" (sngby98@gmail.com)
	
	Program to compute the kth largest value in an array
	Input: a[]: the array values. Note the value of k is written
	directly into the code and currently has the value k=MAX_SIZE/2, so 
	that the middle value of the array is computed i.e. the median
	Output: the kth largest value in the array.
*/
#define MAX_SIZE 10

int main(void)
{
	int i, j, k, maxindex;
	double a[MAX_SIZE];
	double tmp, max;
	printf("Please enter the kth largest value: ");
	scanf("%d", &k);
	
	FILE *fp;

	fp = fopen("floats.txt", "r");

	for (i = 0; i < MAX_SIZE; i++)
	{
		fscanf(fp, "%lf", &a[i]);
	}
	fclose(fp);
	
	//k = MAX_SIZE / 2;  /* the median position */

	/* Run the outer loop k times, each time around the outer loop
	 the (j+1)st largest value is found and placed in position j
	 of the loop */
	for (j = 0; j < k; j++)
	{
		max = a[j];
		maxindex = j;

		/* the inner loop starts are i=j+1 i.e. it starts at
		the next element of the array AFTER the position in which
		the previous largest value was placed. Therefore it finds
		the next largest value, excluding all values already found
		and stored in a[0],...,a[j]
		*/
		for (i = j + 1; i < MAX_SIZE; i++)
		{
			if (a[i] > 0.5)
			{
				if (a[i] > max)
				{
				  max = a[i];
				  maxindex = i;
				}
			}
		}
		/* swap a[j] and a[maxindex] */
		tmp = a[j];
		a[j] = a[maxindex];
		a[maxindex] = tmp;
	}
	
	if (k == 0)
		printf("\nk is zero\nPlease choose another k value.\n");
	else if (a[k-1] < 0.5)
		{
			printf("\nThe k value you currently chosen is not greater than 0.5.\n");
			printf("Please choose another k value.\n");
		}
	else
		printf("\nThe kth largest value in the array is %lf\n", a[k-1]);
}






















