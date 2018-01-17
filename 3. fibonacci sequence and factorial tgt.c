#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
void forFactorial();
void whileFactorial();
void forFibo();
void whileFibo();

int main(void)
{
	char tos, tol; // tos stands for type_of_sequence
	               // tol stands for type_of_loop
	
	printf("Please enter the type of sequence (factorial or fibo):\n");
	printf("(Enter '1' for factorial and '2' for fibo)\n");
	scanf("%c", &tos);
	scanf("%c", &tol); // weirdly, if you don't put this here, it will just 
					   // end without asking for tol.
	
	if (tos == '1')
	{
		printf("\nPlease enter the type of loop (for or while):\n");
		printf("(Enter 'f' for for loops and 'w' for while loops)\n");
		scanf("%c", &tol);
		if (tol == 'f')
			forFactorial();
		else if (tol == 'w')
			whileFactorial();
	}
	else if (tos == '2')
	{
		printf("\nPlease enter the type of loop (for or while):\n");
		printf("(Enter 'f' for for loops and 'w' for while loops)\n");
		scanf("%c", &tol);
		if (tol == 'f')
			forFibo();
		else if (tol == 'w')
			whileFibo();
	}
	return 0;
}












void forFactorial()
{
	double total;
	int n;
	int i;
	i = 0;
	
	printf("\nPlease enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	if (n >= 1)
	{
		printf("1\n");
	}
	if (n >= 2)
	{
		printf("1\n");
		total = 1;
	}
	
	for (i = 3; i <= n; i++)
	{
		total = total * i;
		printf("%f\n", total);
	}
}


void whileFactorial()
{
	double total;
	int n;
	int i;
	i = 0;
	
	printf("\nPlease enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	if (n >= 1)
	{
		printf("1\n");
	}
	if (n >= 2)
	{
		printf("1\n");
		total = 1;
	}
	
	i = 3;
	while (i <= n)
	{
		total = total * i;
		printf("%f\n", total);
		
		i++;
	}
}

void forFibo()
{
	int a_n, a_n_1, a_n_2;
	int n;
	int i;
	
	printf("\nPlease enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	if (n >= 1)
		printf("1\n");
	if (n >= 2)
		printf("1\n");

	a_n_1 = 1;
	a_n_2 = 1;

	for (i = 3; i <= n; i++)
	{
		a_n = a_n_1 + a_n_2;
		printf("%d\n", a_n);
		a_n_2 = a_n_1;
		a_n_1 = a_n;
	}
}

void whileFibo()
{
	int a_n, a_n_1, a_n_2;
	int n;
	int i;
	
	printf("\nPlease enter the number N for the sequence: ");
	scanf("%d", &n);
	printf("\n");
	
	printf("Sequence:\n");
	if (n >= 1)
		printf("1\n");
	if (n >= 2)
		printf("1\n");

	a_n_1 = 1;
	a_n_2 = 1;
	
	i = 3;
	while (i <= n)
	{
		a_n = a_n_1 + a_n_2;
		printf("%d\n", a_n);
		a_n_2 = a_n_1;
		a_n_1 = a_n;
		
		i++;
	}
}
