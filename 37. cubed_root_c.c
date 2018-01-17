#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

// Declare le function.
double return_root(double c);

int main(void)
{
	double c;
	double x1;
	
	printf("Please enter the value whose cubed-root you want to compute:\n");
	printf("(Sample input: 125)\n");
	scanf("%lf", &c);
	
	x1 = return_root(c);

	// Prints the cube root of c.
	printf("\nCube root of %lf is %lf", c, x1);

	return 0;
}

// Define le function.
double return_root(double c)
{
	double EPSILON = 1e-10;
	int MAX = 10000, i;

	double x1;

	// Used a specified tolerance as guard.
	while (fabs(x1*x1*x1 - c) > EPSILON)
	{
		// Let x1 be a random starting x, in this case, as c.
		x1 = c;

		i = 0;
		while (i < MAX && fabs(x1*x1*x1 - c) > EPSILON)
		{
			// Formula for newton's method.
			//
			// Note that x1 to the RHS will be the previous value of x1.
			// except during the first iteration, in which case, x1 = c.
			x1 = x1 - ((x1*x1*x1 - c)/(3*x1*x1));
			
			i++;
		}
	}
	
	return x1;
}
