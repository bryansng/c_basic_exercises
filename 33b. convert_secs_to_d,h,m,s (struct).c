#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/

// Create the typedef statement for struct Time.
typedef struct Time
{
	int days;
	int hours;
	int minutes;
	int seconds;
} Time;

// Declare le function.
Time convert_time(int total_secs);

int main(void)
{
	Time t;
	int user_time;
	
	// 1 day is 86400 seconds, 1 hour is 3600 seconds, 1 minute is 60 secs.
	// 90061 should return 1 day, 1 hour, 1 minute and 1 second.
	printf("Please enter a time:\n");
	printf("(Sample time: 90061)\n");
	scanf("%d", &user_time);
	printf("\n");
	
	// Calls the function that will return the t with the
	// converted days, hours, minutes and seconds.
	t = convert_time(user_time);
	
	printf("Days: %d\nHours: %d\nMinutes: %d\nSeconds: %d\n", t.days, t.hours, t.minutes, t.seconds);
	
	return 0;
}

// Define le function.
Time convert_time(int total_secs)
{
	// Local declare of t.
	Time t;
	int remaining_secs = total_secs;
	
	// 24*60*60 = 86400.
	// 1 Day is 86400 seconds.
	t.days = remaining_secs / (24*60*60);
	remaining_secs %= (24*60*60);
	
	// 60*60 = 3600.
	// 1 Hour is 3600 seconds.
	t.hours = remaining_secs / (60*60);
	remaining_secs %= (60*60);
	
	// 60 = 60.
	// 1 Minute is 60 seconds.
	t.minutes = remaining_secs / 60;
	remaining_secs %= 60;
	
	// The remaining time after a series of division would be the seconds.
	t.seconds = remaining_secs;
	
	// Return the local declared t.
	return t;
}


