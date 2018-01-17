#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// declare le function.
double area_of_triangle(double base, double height);

int main(void)
{
	double base;
	double height;
	double area;
	
	printf("Please enter the base and the height of the triangle:\n");
	printf("(Sample format: 10 5)\n");
	scanf("%lf", &base);
	scanf("%lf", &height);
	
	// pass the value onto area from the called function.
	area = area_of_triangle(base, height);
	
	printf("\nArea of triangle: %lf", area);
	
	return 0;
}

// define le function.
double area_of_triangle(double base, double height)
{
	// returns the formula for computing area of triangle.
	return 0.5 * base * height;
}
