#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

void decimalToBinary(int N, int the_n);

int main(void)
{
	int N;
	int the_n;
	
	printf("Please enter your N value:\n");
	printf("(Make sure your value is within 0-255)\n");
	scanf("%d", &N);
	
	if (N < pow(2, 8) && N >= 0)
	{
		the_n = 8;
		decimalToBinary(N, the_n);
	}
	else
	{
		printf("\nYou entered the value outside of the range 1-255.\n");
	}
	return 0;
}


void decimalToBinary(int N, int the_n)
{
	#define the_n the_n
	int store_N;
	store_N = N;
	
	int bi;
	
	int tmp, placement;
	int i;
	int a[the_n];
	
	while (N != 0)
	{
		printf("\n");
		for (i = 0; i < the_n; i++)
		{
			bi = N % 2;
			//printf("%d\n", bi);
			N = N / 2;
			//printf("%d\n\n", N);
			a[i] = bi;
		}
	}
	printf("\nBefore Reverse:\n");
	for (i = 0; i < the_n; i++)
		printf("%d, ", a[i]);
	printf("\n");
	
	// Reverses the array
	for (i = 0; i < the_n/2; i++)
	{
		tmp = a[i];
		placement = (the_n - i - 1);
		a[i] = a[placement];
		a[placement] = tmp;
	}
	
	printf("\nAfter Reverse:\n");
	if (store_N == 0)
		printf("00000000");
	else
	{
		for (i = 0; i < the_n; i++)
			printf("%d", a[i]);
	}
}
