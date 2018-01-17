#include <stdio.h>
//gcc -Wall -Wl,--stack,100000000 -o file_name.c file_name.exe
// compile using the command above.
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
#include <stdlib.h>
#include <math.h>
#define N 1000000

int main(void)
{
	int length_of_array;  // The number of lengths
	int target_length; // The target length
	int possible_l2 = 0;
	int l1 = 0, l2 = 0;
	int i, j;
	int store_index; // for the possible_l2[] array
	int found = 0; // for while loop condition
	
	// opens file, reads the first 2 lines of codes first to obtain
	// target_length and length_of_array.
	FILE *fp;
	
	// NOTE: This works perfectly well on linux, crashes in Windows.
	//
	// Workaround:
	// gcc -Wall -Wl,--stack,100000000 -o A7_Q1.c A7_Q1.exe
	// compile using the command above.
	//
	//fp = fopen("A7_Q1_small.txt", "r");
	fp = fopen("A7_Q1_large.txt", "r");
	fscanf(fp, "%d", &target_length);
	fscanf(fp, "%d", &length_of_array);
	
	// makes length_of_array a constant with its own value.
	#define length_of_array length_of_array
	
	// creates a new array based on the length_of_array.
	// creates an array to store the possible_l2 values.
	int lengths[length_of_array]; // The array of available lengths
	int possible_l2s[length_of_array]; // The array of possible l2
	
	// using that array, we fill up the array with the lengths.
	// and we close the file.
	for (i = 0; i < length_of_array; i++)
		fscanf(fp, "%d", &lengths[i]);
	fclose(fp);
	
	// converts the target_length from cm to nm. 1cm = 10^7 nm.
	target_length = target_length * pow(10, 7);
	
	// stores the possible_l2 values in the possible_l2s[] array
	// for later use.
	for (i = 0, store_index = 0; i < length_of_array; i++)
	{
		possible_l2 = target_length - lengths[i];
		
		// we know that the lengths are smaller than 100,000,000
		// hence we only add possible_l2 that are smaller than that
		// to the array.
		//
		// because of this, we need to use store_index to know how big
		// possible_l2s[] is, which we will need to use later.
		if (possible_l2 < 100000000)
		{
			possible_l2s[store_index] = possible_l2;
			store_index++;
		}
	}
	
	
	// initialize the indexes required by lengths[] and possible_l2s[].
	// lengths[j] will start from its highest index, which has the greatest 
	// length.
	//
	// possible_l2s[i] will start from 0, which has the greatest possible 
	// value for l2.
	j = length_of_array-1;
	i = 0;
	
	// Because both arrays are sorted from highest to lowest for 
	// possible_l2s[] and lowest to highest for lengths[], we can take 
	// advantage of this fact.
	//
	// By comparing them.
	while (!found && i < store_index)
	{
		// If we found the value of l2,
		// we assign l2 as that particular value and l1 as target_length - l2.
		if ( lengths[j] == possible_l2s[i] )
		{
			l2 = possible_l2s[i];
			l1 = target_length - l2;
			break; //OR found = 1; i = store_index;
		}
		
		// In the case where the above if statement doesn't execute,
		// if the current value of lengths is greater than the current
		// value of possible_l2,
		// we decrease lengths's index.
		else if ( lengths[j] > possible_l2s[i] )
		{
			j--;
		}
		
		// In the case where the first if statement doesn't execute,
		// if the current value of possible_l2 is greater than the
		// current value of lengths,
		// we increase possible_l2's index.
		else if ( lengths[j] < possible_l2s[i] )
		{
			i++;
		}
	}
	
	// prints out l1 and l2 if found, if not, prints none exists.
	if ( (l1+l2) == target_length)
	{
		printf("Target Length: %d\n\n", l1+l2);
		printf("l1: %d\nl2: %d\n", l1, l2);
	}
	else
		printf("none exists");
	
	return 0;
}
