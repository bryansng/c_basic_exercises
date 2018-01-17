#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

// declare le function.
double root_1_of_quad_eq(double a, double b, double c);
double root_2_of_quad_eq(double a, double b, double c);

int main(void)
{
	double a, b, c;
	double r1, r2;
	int choice;
	
	printf("Please enter the a, b, c of the quadratic equation and choose which root to show:\n");
	printf("(Choices: 1 for Root 1  |  2 for Root 2  |  3 for both.)\n");
	printf("(Sample input: 1 2 1 3)\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%d", &choice);
	
	// if a is 0, then it is not a quadratic equation, so print this.
	if (a == 0)
	{
		printf("a must not be 0, because you cannot divide by zero.\n\n");
	}
	// roots are imaginary if b^2-4ac is smaller than 0, so print this.
	else if ((pow(b, 2) - (4 * a * c)) < 0)
	{
		//printf("\nNOTE: If nan, roots are imaginary");
		//printf("\nOR: If #INF00, roots are imaginary");
		printf("\nRoots are imaginary.");
	}
	else
	{
		printf("\n");
		// choice 1 returns only r1.
		if (choice == 1)
		{
			// calculates r1 and prints it out.
			r1 = root_1_of_quad_eq(a, b, c);
			printf("x1: %f\n", r1);
		}
		// choice 2 returns only r2.
		else if (choice == 2)
		{
			// calculates r2 and prints it out.
			r2 = root_2_of_quad_eq(a, b, c);
			printf("x2: %f\n", r2);
		}
		// choice 3 returns both r1 and r2.
		else if (choice == 3)
		{
			// calculates r1 and r2 and prints it out.
			r1 = root_1_of_quad_eq(a, b, c);
			r2 = root_2_of_quad_eq(a, b, c);
			
			printf("x1: %f\n", r1);
			printf("x2: %f\n", r2);
		}
	}
	
	return 0;
}

// define le function for root 1.
double root_1_of_quad_eq(double a, double b, double c)
{
	double r1;
	
	// The formula for finding the roots in a quadratic equation.
	// x1 = (-b+sqrt(b^2-4ac))/2a
	// AND
	// x2 = (-b-sqrt(b^2-4ac))/2a
	
	r1 = (- b + sqrt(pow(b, 2) - (4.0 * a * c))) / (2 * a);
	
	return r1;
}

// define le function for root 2.
double root_2_of_quad_eq(double a, double b, double c)
{
	double r2;
	
	// The formula for finding the roots in a quadratic equation.
	// x1 = (-b+sqrt(b^2-4ac))/2a
	// AND
	// x2 = (-b-sqrt(b^2-4ac))/2a
	
	r2 = (- b - sqrt(pow(b, 2) - (4.0 * a * c))) / (2 * a);
	
	return r2;
}
