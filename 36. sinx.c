#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>
#define N 100

// Declare le function.
double return_sinx(double x);

int main(void)
{
	double x;
	double sum;
	
	printf("Please enter the value x in degrees:\n");
	scanf("%lf", &x);
	
	// Converts degree to radian.
	x = (M_PI / 180.0) * x;
	
	// Calls the function, the function passes the value of sum to the 
	// variable sum in the calling function.
	sum = return_sinx(x);
	
	printf("\nsin(x) via my_function: %.20lf\n", sum);
	printf("sin(x) via lib_function: %.20lf\n", sin(x));
	printf("Difference: my_function - lib_function: %.20lf", (sum - sin(x)));
	
	return 0;
}

// Define le function.
double return_sinx(double x)
{
	int num_fact = 0;
	double total_fact = 1;
	double sum = 0;
	int i, j;	// Counters.
	
	for (i = 0; i < N; i++)
	{
		// num_fact gets the factorial count.
		// e.g. 3, 5, 7...
		//
		// The for loop computes the factorial of num_fact.
		// e.g. 3! = 6, 5! = 120, 7! = 5040
		num_fact = (2*i+1.0);
		for (j = num_fact; j > 0; j--)
			total_fact *= j;
		
		// The formula to get sin(x).
		sum += pow(-1, i) * pow(x, 2*i+1.0) / total_fact;
		
		// Resets the total_fact to 1.
		total_fact = 1;
	}
	return sum;
}
