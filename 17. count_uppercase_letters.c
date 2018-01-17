#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	char msg[] = "TESTING 1 two 3 fouR 5.";
	int counter = 0;
	int i;
	
	printf("msg:\n");
	for (i = 0; msg[i] != '\0'; i++)
		printf("%c", msg[i]);
		
	printf("\n\n");
	
	i = 0;
	while (msg[i] != '\0')
	{
		if (msg[i] >= 65 && msg[i] <= 90)
		{
			counter++;
		}
		i++;
	}
	
	printf("Number of uppercases in string is: %d", counter);
	
	return 0;
}
































