#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	double sum;
	int n;
	int i;
	
	printf("Please enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	
	if (n > 0)
	{
		printf("1\n");
		sum = 1;
	}
	
	for (i = 2; i <= n; i++)
	{
		sum += (1.0 / i);   // fyi, this only works if you use 1.0,
		                    // doesn't do crap when 1.
		printf("%lf\n", sum);
	}
	return 0;
}

