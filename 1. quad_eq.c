#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

void printf_a_b_c(int a, int b, int c);
void printf_a(int a);
void printf_b(int b);
void printf_c(int c);

int main(void)
{
	int working;
	working = 1;
	while (working)
	{
		double a, b, c;
		
		// Gives a general idea of the form of quadratic equations and asks the user to express the a, b and c of the equation he/she wants to solve.
		printf("Quadratic equations are in the form of ax^2 + bx + c .\n\n");
		printf("What is your a value? ");
		scanf("%lf", &a);
		printf("\nWhat is your b value? ");
		scanf("%lf", &b);
		printf("\nWhat is your c value? ");
		scanf("%lf", &c);
		
		// Prints the equation with the a, b, c variable given, made complicated because aesthetic.
		printf_a_b_c(a, b, c);
		if (a == 0)
		{
			printf("a must not be 0, because you cannot divide by zero.\n\n");
			break;
		}
		
		// The rest of the below is how we will find the roots of the qua eq.
		double r1, r2;
		
		// The formula for finding the roots in a quadratic equation.
		// x1 = (-b+sqrt(b^2-4ac))/2a
		// AND
		// x2 = (-b-sqrt(b^2-4ac))/2a
		
		r1 = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
		r2 = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
		
		if ((pow(b, 2) - (4 * a * c)) < 0)
		{
			//printf("\nNOTE: If nan, roots are imaginary");
			//printf("\nOR: If #INF00, roots are imaginary");
			printf("Roots are imaginary.");
		}
		else
		{
			printf("x1: %f\n", r1);
			printf("x2: %f\n", r2);
		}
		break;
	}
	return 0;
}









void printf_a_b_c(int a, int b, int c)
{
	if (a == 0)
	{
		printf("\n\nThis is NOT a quadratic equation.\n");
	}
	else
	{
		printf_a(a);
		printf_b(b);
		printf_c(c);
	}
	
}

void printf_a(int a)
{
	if (a > 0)
	{	
		if (a == 1)
		{
			printf("\n\nQuadratic equation given is x^2");
		}
		else
		{
			printf("\n\nQuadratic equation given is %dx^2", a);
		}
	}
	else
	{
		if (a == -1)
		{
			printf("\n\nQuadratic equation given is -x^2");
		}
		else
		{
			printf("\n\nQuadratic equation given is -%dx^2", a);
		}
	}
}

void printf_b(int b)
{
	if (b > 0)
	{
		if (b == 1)
		{
			printf("+x");
		}
		else
		{
			printf("+%dx", b);
		}
	}
	else if (b == 0)
	{
	}
	else
	{
		if (b == -1)
		{
			printf("-x");
		}
		else
		{
			printf("%dx", b);
		}
	}
}

void printf_c(int c)
{
	if (c > 0)
	{
		printf("+%d.\n", c);
	}
	else if (c == 0)
	{
		printf(".\n");
	}
	else
	{
		printf("%d.\n", c);
	}
}
