#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	char msg[] = "Make this string uppercase.";
	char store_msg[] = {0}; // stores the uppercase message.
	char ch = 'x';   // initialized with anything.
	int i = 0, counter;  // counters.
	int MAX_STR_LEN;  // for dynamic message length.
	
	printf("%s\n\n", msg);  // prints the message.
	
	// gets the dynamic length of the encoded_msg you entered.
	while (msg[i] != '\0')
	{
		MAX_STR_LEN++;
		i++;
	}
	
	// creates a constant from the MAX_STR_LEN value gathered above
	#define MAX_STR_LEN MAX_STR_LEN
	
	i = 0; // resets the i to 0
	while (i < MAX_STR_LEN && msg[i] != '\0')
	{
		// deals with lowercase alphabets via ASCII table.
		if (msg[i] >= 97 && msg[i] <= 122)
		{
			// switches the small alphabets with the encoded small alphabets.
			ch = 'A' + (msg[i] - 'a');
			store_msg[counter++] = ch;
			i++;
		}
		// deals with the space ' '.
		else if (msg[i] == ' ')
		{
			// basically just append it into the decoded_msg.
			store_msg[counter++] = msg[i];
			i++;
		}
		// deals with all the other random characters (i.e. numbers).
		else
		{
			// basically just append it into the decoded_msg.
			store_msg[counter++] = msg[i];
			i++;
		}
	}
	
	// prints the uppercase msg.
	printf("store_msg:\n");
	for (i = 0; i < counter; i++)
		printf("%c", store_msg[i]);
	
	return 0;
}
