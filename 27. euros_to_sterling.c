#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// declare le function.
double euros_to_sterling(double euros);

int main(void)
{
	double euros;
	double sterling;
	
	printf("Please enter the euros to be converted to sterling:\n");
	scanf("%lf", &euros);
	
	// pass the value onto sterling from the called function.
	sterling = euros_to_sterling(euros);
	
	printf("\nThe euros %lf, in sterling is: %lf", euros, sterling);
	
	return 0;
}

// define le function.
double euros_to_sterling(double euros)
{
	// returns the formula for converting euros to sterling.
	return euros * 0.8;
}
