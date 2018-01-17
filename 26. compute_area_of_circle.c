#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define PI 3.14159265358979323846	// value for le PI.

// declare le function.
double area_of_circle(double radius);

int main(void)
{
	double radius;
	double area;
	
	printf("Please enter the radius of the circle:\n");
	scanf("%lf", &radius);
	
	// pass the value onto area from the called function.
	area = area_of_circle(radius);
	
	printf("\nThe area of the circle is: %lf", area);
	
	return 0;
}

// define le function.
double area_of_circle(double radius)
{
	// returns the formula for computing area of circle.
	return PI * radius * radius;
}
