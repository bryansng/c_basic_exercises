#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>
#define N 100000

// Declare le function.
double return_log(double x);

int main(void)
{
	double x;
	double sum;
	
	printf("Please enter the value x:\n");
	scanf("%lf", &x);
	
	sum = return_log(x);
	
	printf("\nln(1+x) via my_func: %.25lf\n", sum);
	printf("ln(1+x) via lib_func: %.25lf\n", log(1+x));
	printf("Difference: my_function - lib_function: %.25lf", (sum - log(1+x)));
		
	return 0;
}

// Define le function.
double return_log(double x)
{
	double sum = 0;
	int i;
	
	//x = fabs(x);
	for (i = 1; i < N; i++)
		sum += pow(-1, i+1) * pow(x, i) / i;
	
	return sum;
}

