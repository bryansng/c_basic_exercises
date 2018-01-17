#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define ASCII_SIZE 256   // ASCII size is 255, but 256 if you include the 0.
int main(void)
{
	char msg[] = "aabbcc;;;;.....,,,,:::::?????";
	int count[ASCII_SIZE] = {0};   // counter array for the individual characters.
	int value = 0;   // used to store the integer value of the punctuations.
	int MAX_STR_LEN = 0;   // required for dynamic length.
	int i = 0;    // counter.
	
	printf("msg:\n");
	printf("%s\n\n", msg);   // prints the message.
	
	// gets the dynamic length of the encoded_msg you entered.
	while (msg[i] != '\0')
	{
		MAX_STR_LEN++;
		i++;
	}
	
	// creates a constant from the MAX_STR_LEN value gathered above.
	#define MAX_STR_LEN MAX_STR_LEN
	
	i = 0;   // initialize i as 0.
	// if not yet reach the null termination and i smaller than msg size,
	// continue into the loop.
	while (msg[i] != '\0' && i < MAX_STR_LEN)
	{
		// get the integer value of the punctuations.
		value = msg[i];
		// increment that value in the count array.
		count[value]++;
		i++;
	}
	
	printf("Occurrence:\n");
	for (i = 0; i < ASCII_SIZE; i++)
	{
		// prints only the symbols/alphabets/numbers/whatever that is not zero.
		if ( count[i] != 0 )
		{
			// prints the character, instead of the integer value.
			printf("'%c' occurred %d times.\n", i, count[i]);
		}
	}
	printf("\n\n");
	
	return 0;
}
