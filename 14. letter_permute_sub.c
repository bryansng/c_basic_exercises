#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define AL_SIZE 26  // alphabet size
int main(void)
{
	//"abcdefghijklmnopqrstuvwxyz"
	//"qjczieaungsdfxmphybklortvw"
	//"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	//"QJCZIEAUNGSDFXMPHYBKLORTVW"
	
	char low_alphabets[] = "abcdefghijklmnopqrstuvwxyz"; // lowercase alphabets.
	char big_alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // uppercase alphabets.
	char low_perm[] = "qjczieaungsdfxmphybklortvw"; // lowercase permute letters.
	char big_perm[] = "QJCZIEAUNGSDFXMPHYBKLORTVW"; // uppercase permute letters.
	//char msg[] = "secret message to encode"; // sample 1.
	char msg[] = "Secret Message To Encode"; // sample 2.
	char decoded_msg[] = {0}; // stores the decoded message.
	int MAX_STR_LEN;
	int counter;
	int i = 0, k = 0;
	
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
			for (k = 0; k < AL_SIZE; k++)
			{
				// switches the small alphabets with the encoded small alphabets.
				if (msg[i] == low_alphabets[k])
				{
					decoded_msg[counter++] = low_perm[k];
				}
			}
			i++;
		}
		// deals with uppercase alphabets via ASCII table.
		else if (msg[i] >= 65 && msg[i] <= 90)
		{
			for (k = 0; k < AL_SIZE; k++)
			{
				// switches the big alphabets with the encoded big alphabets.
				if (msg[i] == big_alphabets[k])
				{
					decoded_msg[counter++] = big_perm[k];
				}
			}
			i++;
		}
		// deals with the space ' '.
		else if (msg[i] == ' ')
		{
			// basically just append it into the decoded_msg.
			decoded_msg[counter++] = msg[i];
			i++;
		}
		// deals with all the other random characters (i.e. numbers).
		else
		{
			// basically just append it into the decoded_msg.
			decoded_msg[counter++] = msg[i];
			i++;
		}
	}
	
	// prints the decoded msg.
	printf("decoded_msg:\n");
	for (i = 0; i < counter; i++)
		printf("%c", decoded_msg[i]);
	
	return 0;
}



// BOSS FORMULA:
// {if(msg[i]) = 'a' && msg[i] <= 'z') the msg[i] = perm[msg[i] - 'a']; i++}
