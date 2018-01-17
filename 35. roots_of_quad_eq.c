#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

// Declare le function.
int quadroots(double a, double b, double c, double *r1, double *r2);

int main(void)
{
	double a, b, c;
	double r1 = 0, r2 = 0;
	int return_v;
	
	// Gets user input for a, b, c.
	printf("Please enter the a, b, c of the quadratic equation:\n");
	printf("(Sample input: 1 2 1)\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	printf("\n");
	
	// Calls the function.
	return_v = quadroots(a, b, c, &r1, &r2);
	
	// If a is 0, then it is not a quadratic equation, so print this.
	if (a == 0)
	{
		printf("a must not be 0, because you cannot divide by zero.\n\n");
	}
	// If return_v is -1, print this.
	else if (return_v == -1)
		printf("Roots are imaginary/complex.");
	// If instances of both the above is not true, then it is confirmed that
	// the roots are real, in that case, we print out r1 and r2.
	else if (return_v == 0)
	{
		printf("x1: %f\n", r1);
		printf("x2: %f\n", r2);
	}
	
	return 0;
}

// Define le function.
int quadroots(double a, double b, double c, double *r1, double *r2)
{	
	// Roots are imaginary if b^2-4ac is smaller than 0,
	// we return -1.
	if ((pow(b, 2) - (4 * a * c)) < 0)
	{
		return -1;
	}
	// We point the calculated values to r1 and r2 respectively.
	else
	{
		// The formula for finding the roots in a quadratic equation.
		// x1 = (-b+sqrt(b^2-4ac))/2a
		// AND
		// x2 = (-b-sqrt(b^2-4ac))/2a
		
		//*r1 = (- b + sqrt(pow(b, 2) - (4.0 * a * c))) / (2 * a);
		*r1 = (-2 * c) / (b + sqrt(pow(b, 2) - 4 * a * c));
		*r2 = (- b - sqrt(pow(b, 2) - (4.0 * a * c))) / (2 * a);
		
		return 0;
	}
}
