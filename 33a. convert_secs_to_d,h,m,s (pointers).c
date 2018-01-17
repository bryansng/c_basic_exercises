#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// Declare le function.
void convert_time(int total_secs, int *days, int *hours, int *minutes, int *seconds);

int main(void)
{
	int days, hours, minutes, seconds;
	int user_time;
	
	// 1 day is 86400 seconds, 1 hour is 3600 seconds, 1 minute is 60 secs.
	// 90061 should return 1 day, 1 hour, 1 minute and 1 second.
	printf("Please enter a time:\n");
	printf("(Sample time: 90061)\n");
	scanf("%d", &user_time);
	printf("\n");
	
	// Calls the function, with inputted user time and the addresses to
	// days, hours, minutes and seconds.
	convert_time(user_time, &days, &hours, &minutes, &seconds);
	
	// Prints the results that we got from the function.
	printf("Days: %d\nHours: %d\nMinutes: %d\nSeconds: %d\n", days, hours, minutes, seconds);
	
	return 0;
}

// Define le function.
//
// The pointers point to the addresses of days, hours, minutes and secodns
// respectively.
void convert_time(int total_secs, int *days, int *hours, int *minutes, int *seconds)
{
	int remaining_secs = total_secs;
	
	// 24*60*60 = 86400.
	// 1 Day is 86400 seconds.
	//
	// We point the value to the address of days.
	*days = remaining_secs / (24*60*60);
	remaining_secs %= (24*60*60);
	
	// 60*60 = 3600.
	// 1 Hour is 3600 seconds.
	//
	// We point the value to the address of hours.
	*hours = remaining_secs / (60*60);
	remaining_secs %= (60*60);
	
	// 60 = 60.
	// 1 Minute is 60 seconds.
	//
	// We point the value to the address of minutes.
	*minutes = remaining_secs / 60;
	remaining_secs %= 60;
	
	// The remaining time after a series of division would be the seconds.
	//
	// We point the value to the address of seconds.
	*seconds = remaining_secs;
}


