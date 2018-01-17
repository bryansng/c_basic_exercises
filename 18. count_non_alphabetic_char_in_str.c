#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	char msg[] = "testing 1 two 3 four 5 six.";
	int i, counter;
	
	printf("msg:\n");
	printf("%s\n\n", msg);
	
	i = 0;
	while (msg[i] != '\0')
	{
		if (!(msg[i] >= 97 && msg[i] <= 122) && !(msg[i] >= 65 && msg[i] <= 90))
		{
			//printf("%c\n", msg[i]); // for debug
			counter++;
		}
		
		i++;
	}
	
	printf("There are %d non-alphabetic characters in the string.\n", counter);
	printf("Excluding null terminator but including whitespace ' '.");
	
	return 0;
}
