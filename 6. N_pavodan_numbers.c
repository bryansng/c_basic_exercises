#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	float p_n, p_n_1, p_n_2, p_n_3;
	int n;
	int i;
	
	//n = 30;
	printf("Please enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	
	if (n >= 1)
		printf("1\n");
	if (n >= 2)
		printf("1\n");
	if (n >= 3)
		printf("1\n");
		
	p_n_3 = 1;
	p_n_2 = 1;
	p_n_1 = 1;
	
	// The only difference between this question and the fibonacci sequence
	// and the 2nd question is:
	//
	// You have to keep p_n_1 in the loop even though the formula
	// just requires p_n_2 and p_n_3.
	for (i = 4; i <= n; i++)
	{
		p_n = p_n_2 + p_n_3;
		printf("%f\n", p_n);
		
		p_n_3 = p_n_2;
		p_n_2 = p_n_1;
		p_n_1 = p_n;
	}
	return 0;
}
