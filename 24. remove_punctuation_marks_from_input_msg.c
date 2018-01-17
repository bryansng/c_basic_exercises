#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define MAX_STR_LEN 200   // assume string is this big.
int main(void)
{
	char store_msg[MAX_STR_LEN] = {0};   // stores the new msg without 
										 // punctuations.
	int i, j;   // counters
	
	// a few test cases:
	char msg[MAX_STR_LEN];
	//char msg[MAX_STR_LEN] = "T''oo, many, punctuation marks:; by far!!";
	
	printf("Please enter any message that includes !'?;:,. :\n");
	printf("(Sample message: T''oo, many, punctuation marks:; by far!!)\n");
	// acquires the user_input from user.
	fgets(msg, MAX_STR_LEN, stdin);
	
	// prints the message.
	printf("\nThe msg:\n");
	printf("%s\n\n", msg);
	
	// ignores all the punctuations and stores the msg character by character
	// into store_msg.
	for (i = 0, j = 0; i < MAX_STR_LEN; i++)
	{
		// 39 is the ASCII code for single quotes.
		if ( (msg[i] != '!') && msg[i] != 39 && (msg[i] != '?') && (msg[i] != ';') && (msg[i] != ':') && (msg[i] != ',') && (msg[i] != '.') )
			// stores the character into store_msg and increments the j
			// for next iteration.
			store_msg[j++] = msg[i];
	}
	
	// prints the message without any punctuations.
	printf("Msg without punctuations:\n");
	printf("%s\n\n", store_msg);
	
	
	return 0;
}
