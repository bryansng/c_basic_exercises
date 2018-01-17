#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	char msg[] = "Reverse me"; 
	char tmp;
	int MAX_STR_LEN;   // required to get the encoded_msg length, its dynamic.
	int i = 0;   // i is the counter.
	int middle;// middle is for in-place reversal algorithm.
	
	printf("msg:\n");
	printf("%s\n\n", msg);  // prints the message.
	
	// gets the dynamic length of the encoded_msg you entered.
	while (msg[i] != '\0')
	{
		MAX_STR_LEN++;
		i++;
	}
	
	// creates a constant from the MAX_STR_LEN value gathered above.
	#define MAX_STR_LEN MAX_STR_LEN
	
	// gets the median/middle position of the array.
	middle = MAX_STR_LEN/2;
	for (i = 0; i < middle; i++)
	{
		// swap the left char with the right char until they reach the middle.
		tmp = msg[i];
		msg[i] = msg[MAX_STR_LEN - i - 1];
		msg[MAX_STR_LEN - i - 1] = tmp;
	}
	
	// prints msg[] that should be backwards now.
	printf("reversed msg:\n");
	for (i = 0; i < MAX_STR_LEN; i++)
		printf("%c", msg[i]);
	
	return 0;
}
