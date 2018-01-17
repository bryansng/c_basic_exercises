#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#define MAX_SIZE 100  // change this value to increase user input size.
#define AL_SIZE 26  // alphabet size
int main(void)
{
	// for easy reference
	//"abcdefghijklmnopqrstuvwxyz"
	//"qjczieaungsdfxmphybklortvw"
	
	//"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	//"QJCZIEAUNGSDFXMPHYBKLORTVW"
	
	//Sample encoded message
	//Bicyik Fibbqai Km Ixcmzi
	//Secret Message To Encode
	
	char low_alphabets[] = "abcdefghijklmnopqrstuvwxyz"; // lowercase alphabets.
	char big_alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // uppercase alphabets.
	char low_perm[] = "qjczieaungsdfxmphybklortvw"; // lowercase permute letters.
	char big_perm[] = "QJCZIEAUNGSDFXMPHYBKLORTVW"; // uppercase permute letters.
	
	char encoded_msg[] = "Bicyik Fibbqai Km Ixcmzi"; // hardcore the code in.
	
	char decoded_msg[] = {0};  // no introduction needed for this.
	int MAX_STR_LEN;  // required to get the encoded_msg length, its dynamic.
	int i, k = 0;  // for 'for' loops
	
	// gets the message including the whitespaces from user and inputs it
	// into encoded_msg.
	//fgets(encoded_msg, MAX_SIZE, stdin);
	
	printf("encoded_msg:\n");
	printf("%s\n\n", encoded_msg);  // prints the encoded message.
	
	// gets the dynamic length of the encoded_msg you entered.
	while (encoded_msg[i] != '\0')
	{
		MAX_STR_LEN++;
		i++;
	}
	
	// creates a constant from the MAX_STR_LEN value gathered above
	#define MAX_STR_LEN MAX_STR_LEN
	
	i = 0; // resets the i to 0
	while (i < MAX_STR_LEN && encoded_msg[i] != '\0')
	{
		// deals with lowercase alphabets via ASCII table.
		if (encoded_msg[i] >= 97 && encoded_msg[i] <= 122)
		{
			for (k = 0; k < AL_SIZE; k++)
			{
				// switches the small alphabets with the encoded small alphabets.
				if (encoded_msg[i] == low_perm[k])
				{
					decoded_msg[i] = low_alphabets[k];
				}
			}
			i++;
		}
		// deals with uppercase alphabets via ASCII table.
		else if (encoded_msg[i] >= 65 && encoded_msg[i] <= 90)
		{
			for (k = 0; k < AL_SIZE; k++)
			{
				// switches the big alphabets with the encoded big alphabets.
				if (encoded_msg[i] == big_perm[k])
				{
					decoded_msg[i] = big_alphabets[k];
				}
			}
			i++;
		}
		// deals with the space ' '.
		else if (encoded_msg[i] == ' ')
		{
			// basically just append it into the decoded_msg.
			decoded_msg[i] = encoded_msg[i];
			i++;
		}
		// deals with all the other random characters (i.e. numbers).
		else
		{
			// basically just append it into the decoded_msg.
			decoded_msg[i] = encoded_msg[i];
			i++;
		}
	}
	
	// prints the decoded msg.
	printf("decoded_msg:\n");
	for (i = 0; i < MAX_STR_LEN; i++)
	{
		// prevents it to print unecessary characters.
		if (decoded_msg[i] == '\0')
			break;
		
		printf("%c", decoded_msg[i]);
	}
		
	
	
	return 0;
}
