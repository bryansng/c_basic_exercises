#include <stdio.h>
/* 
	Written by "Sng Hong Yao" (sngby98@gmail.com)
*/
int main(void)
{
	float store_w, store_x, store_y, store_z;
	float w, x, y, z;
	printf("Please enter your w, x, y and z.");
	printf("\n(Enter in this pattern, 'w x y z')\n");
	scanf("%f", &w);
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	
	printf("\nBefore sort:\n");
	printf("w: %f\nx: %f\ny: %f\nz: %f\n", w, x, y, z);
	
	// Basically, the theory is:
	// If a is greater than b, they switch places.
	//
	// Example: If w is greater than x, switch.
	//			If w is greater than y, switch.
	//			If w is greater than z, switch.
	//
	//			If x is greater than y, switch.
	//			If x is greater than z, switch.
	//
	//			If y is greater than z, switch.
	//
	// Eventually, z will always end out to be the greatest value while w 
	// being the least with x and y in between them.
	
	while ( (w > x) || (w > y) || (w > z) )
	{
		if (w > x)
		{
			store_w = w;
			store_x = x;
			
			x = store_w;
			w = store_x;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else if (w > y)
		{
			store_w = w;
			store_y = y;
			
			y = store_w;
			w = store_y;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else if (w > z)
		{
			store_w = w;
			store_z = z;
			
			z = store_w;
			w = store_z;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else
			break;
	}
	
	
	
	while ( (x > y || x > z) && (w < x) )
	{
		if (x > y)
		{
			store_x = x;
			store_y = y;
			
			y = store_x;
			x = store_y;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else if (x > z)
		{
			store_x = x;
			store_z = z;
			
			z = store_x;
			x = store_z;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else
			break;
	}
	
	
	
	while ( (y > z) && ( (w < x) && (x < y) ) )
	{
		if (y > z)
		{
			store_y = y;
			store_z = z;
			
			z = store_y;
			y = store_z;
	
			//printf("\n\nw: %f\nx: %f\ny: %f\nz: %f\n\n", w, x, y, z);
			continue;
		}
		
		else
			break;
	}
	
	printf("\nAfter sort:\n");
	printf("w: %f\nx: %f\ny: %f\nz: %f\n", w, x, y, z);
	return 0;
}
