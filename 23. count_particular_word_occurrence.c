#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define MAX_STR_LEN 100   // assume string is this big.
int main(void)
{
	int counter = 0, i = 0;   // counters.
	
	// a few test cases:
	char msg[MAX_STR_LEN];
	//char msg[MAX_STR_LEN] = "Black dogs white dogs and red dogs - Dogs come in many colours.";
	//char msg[MAX_STR_LEN] = "Black dogs, white dogs and red dogs. Dogs come in many colours.";
	
	printf("Please enter any message, make sure it contains the word 'dogs':\n");
	printf("(Sample message: Black dogs, white dogs and red dogs. Dogs come in many colours.)\n");
	// acquires the user_input from user.
	fgets(msg, MAX_STR_LEN, stdin);
	
	// prints the message.
	printf("\nmsg:\n");
	printf("%s\n\n", msg);
	
	// this while loop changes the uppercase letters to lowercase.
	while (msg[i] != '\0' && i < MAX_STR_LEN)
	{
		// converts uppercase letters to lowercase.
		if (msg[i] >= 'A' && msg[i] <= 'Z')
			msg[i] += 'a' - 'A';
		i++;
	}
	
	i = 0;
	// if the letters followed by each other forms the word "dogs", then
	// post-increment the counter.
	while (msg[i] != '\0' && i < MAX_STR_LEN)
	{
		if (msg[i] == 'd' && msg[i+1] == 'o' && msg[i+2] == 'g' && msg[i+3] == 's')
			counter++;
		i++;
	}
	
	// prints the word occurrence.
	printf("There are %d occurrences of the word dogs.", counter);
	
	return 0;
}
