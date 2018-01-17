#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	double p_n, p_n_1, p_n_2;
	int i;
	int n;
	
	//n = 11;
	printf("Please enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	
	if (n > 0)
		printf("0\n");
		
	if (n > 1)
		printf("1\n");
		
	p_n_2 = 0;
	p_n_1 = 1;
	
	for (i = 3; i <= n ; i++)
	{
		p_n = 2*p_n_1 + p_n_2;
		printf("%f\n", p_n);
		
		p_n_2 = p_n_1;
		p_n_1 = p_n;
	}
	return 0;
}
