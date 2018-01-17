#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	//char msg[] = "testing 1 two 3 four 5.";
	char msg[] = {'t', 'e', 's', 't', '.'};
	int MAX_STR_LEN = 0;
	int i;
	
	printf("msg:\n");
	for (i = 0; msg[i] != '\0'; i++)
		printf("%c ", msg[i]);
		
	printf("\n");
	
	i = 0;
	while (msg[i] != '\0')
	{
		if ( (msg[i] >= 1 && msg[i] <= 255) || msg[i] == '\n' || msg[i] == ' ' )
		{
			MAX_STR_LEN++;
			i++;
		}
		else
		{
			printf("test");
			break;
		}
	}
	
	printf("Number of characters in the string: %d", MAX_STR_LEN);
	
	return 0;
}
































