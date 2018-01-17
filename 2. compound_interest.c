#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <math.h>

int main(void)
{
	double A, P, n, r, k;
	char user_choice;
	
	printf("Compound interest can be computed using the formula:\n\n");
	
	printf("A = P(1 + (r/(100k))^(nk))\n\n");
	
	printf("A is the amount (in Euro) that is accumulated after n years\n");
	printf("simple interest rate is r%% per annum\n");
	printf("k determines the frequency with which interest is added to the account\n");
	printf("P (in Euro) is the starting amount of money\n\n");
	
	printf("For instance, if k = 12, then interest is added every month.\n\n");
	
	
	
	printf("What information would you like to find?\n");
	printf("(Enter either A, P, n or r) : ");
	scanf("%c", &user_choice);
	
	//k = 999999999999999999;
	k = 12;
	
	if (user_choice == 'A')
	{
		printf("\nPlease enter the starting principal (P): ");
		scanf("%lf", &P);
		printf("Please enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
		printf("The number of years required to reach this amount (n): ");
		scanf("%lf", &n);
		
		A = P * pow((1 + (r / (100 * k))), (n * k));
		printf("The final accumulated amount (A) is %f", A);
	}
	
	if (user_choice == 'P')
	{
		printf("\nPlease enter the final accumulated amount (A): ");
		scanf("%lf", &A);
		printf("Please enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
		printf("The number of years required to reach this amount (n): ");
		scanf("%lf", &n);
		
		P = (A / pow((1 + (r / (100 * k))), (n * k)));
		printf("The starting principal (P) is %f", P);
	}
	
	if (user_choice == 'n')
	{
		printf("\nPlease enter the starting principal (P): ");
		scanf("%lf", &P);
		printf("Please enter the final accumulated amount (A): ");
		scanf("%lf", &A);
		printf("Please enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
		
		n = ((log10(A/P)) / (log10(1 + r/(100 * k))) / k);
		printf("The number of years required to reach this amount is %f", n);
	}
	
	if (user_choice == 'r')
	{
		printf("\nPlease enter the starting principal (P): ");
		scanf("%lf", &P);
		printf("Please enter the final accumulated amount (A): ");
		scanf("%lf", &A);
		printf("The number of years required to reach this amount (n): ");
		scanf("%lf", &n);
		
		r = (pow(A/P, 1/(n * k)) - 1) * (100 * k);
		printf("The interest rate (as percentage rate per annum) is %f", r);
	}
	
	return 0;
}


























