#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define MAX_STR_LEN 200   // assume string is this big.
int main(void)
{
	int i, counter = 0;   // counters.
	
	// a few test cases:
	//char msg[MAX_STR_LEN] = {0};
	//char msg[MAX_STR_LEN] = "The dog, the cat and the mouse.";
	char msg[MAX_STR_LEN];
	
	printf("Please enter any message:\n");
	printf("(Sample message: Foobar , spam eggs !)\n");
	// acquires the user_input from user.
	fgets(msg, MAX_STR_LEN, stdin);
	
	i = 0;  // initialises i.
	while (msg[i] != '\0')
	{
		// does not post-increment the counter if the character followed by 
		// the space character is a space/tab/newline/null-terminator character.
		if (msg[i] == ' ' && !(msg[i+1] == ' ' || msg[i+1] == '\0' || msg[i+1] == '\n' || msg[i+1] == '\t') )
			// post-increments the counter if the character followed
			// by the space character is an alphabet.
			if ( (msg[i+1] >= 'A' && msg[i+1] <= 'Z') || (msg[i+1] >= 'a' && msg[i+1] <= 'z') )
				counter++;
		i++;
	}
	
	// if the first character in the string is a space character,
	// print this message instead of printing the count.
	if (msg[0] == ' ')
		printf("\nWrong sentence structure, first character of the sentence cannot be a space.\n\n");
	else
	{
		// prints the message.
		printf("\nmsg:\n");
		printf("%s\n\n", msg);
		
		// prints the number of words.
		printf("The msg contains %d words", ++counter);
	}
	
	
	return 0;
}
