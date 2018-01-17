#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <stdlib.h>

// declare le function.
void removeChars(char* msg1, char* msg2, int size_msg1, int size_msg2);

#define MAX_STR_LEN 200   // assume string is this big.

int main(void)
{
	char msg1[MAX_STR_LEN];
	char msg2[MAX_STR_LEN];
	int size_msg1 = 0;
	int size_msg2 = 0;
	
	//char msg1[MAX_STR_LEN] = "hello..there, you!";
	//char msg2[MAX_STR_LEN] = ".!,";
	
	// gets msg1.
	printf("Please enter the first message:\n");
	printf("(Sample Message: hello..there, you!)\n");
	fgets(msg1, MAX_STR_LEN, stdin);
	
	// gets the size of array msg1.
	size_msg1 = 0;
	while (msg1[size_msg1] != '\0')
	{
		size_msg1++;
	}
	// decrements to ignore null-terminator.
	size_msg1--;
	
	// gets msg2.
	printf("\nPlease enter the second message:\n");
	printf("(Sample Message: .!,)\n");
	fgets(msg2, MAX_STR_LEN, stdin);
	
	// gets the size of array msg2.
	size_msg2 = 0;
	while (msg2[size_msg2] != '\0')
	{
		size_msg2++;
	}
	// decrements to ignore null-terminator.
	size_msg2--;
	
	// Calls the function to remove the characters that are in msg2 from msg1.
	removeChars(msg1, msg2, size_msg1, size_msg2);
	
	return 0;
}

// defines le function.
// requires the "*" for some reason to point it to arrays, if not, doesn't
// work at all.
void removeChars(char* msg1, char* msg2, int size_msg1, int size_msg2)
{
	char store_msg[MAX_STR_LEN] = {0};
	int i, j;	// counters.
	int counter = 0;	// counter for store_msg.
	
	// Used to check if the characters in msg2 are in msg1, if they are
	// the index for that character in msg1 is checked to false.
	//
	// if false, we don't append it to store_msg,
	// if true, append it to store_msg.
	int array_checker[MAX_STR_LEN];
	
	// Outer loop is for msg1.
	for (i = 0; i < size_msg1 || msg1[i] != '\0'; i++)
	{
		// Initialize the character at index i to true first.
		array_checker[i] = 1;
		
		// Inner loop is for msg2.
		for (j = 0; j < size_msg2 || msg2[j] != '\0'; j++)
		{
			// If the character in msg2 exists in msg1,
			// we set the checker to false.
			if ( msg1[i] == msg2[j] )
			{
				array_checker[i] = 0;
				break;
			}
		}
		
		// If the character is true, we append it to store_msg,
		// else, we don't.
		if (array_checker[i] == 1)
			store_msg[counter++] = msg1[i];
	}
	
	// Prints the message from within the called function.
	printf("\n%s", store_msg);
	
	// Not really sure how to return an array.
	//return *store_msg;
}













