#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	char msg[] = "Too many	sp\naces";  // consists of a space, a tab, and a newline.
	char store_msg[] = "";   // stores the message without spaces
	int MAX_STR_LEN;   // required to get the encoded_msg length, its dynamic.
	int i = 0, counter = 0;  // counters.
	
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
	
	i = 0, counter = 0;  // initialize i and counter for the loop.
	while (msg[i] != '\0' && i < MAX_STR_LEN)
	{
		// ignores the tab, space and newline entirely by just incrementing i.
		if ( msg[i] == '\t' || msg[i] == ' ' || msg[i] == '\n' )
			i++;
		// for the rest of the characters, store it into store_msg[].
		else
			store_msg[counter++] = msg[i++];
	}
	
	// prints store_msg[].
	printf("store_msg:\n");
	for (i = 0; i < counter; i++)
		printf("%c", store_msg[i]);
	
	return 0;
}
