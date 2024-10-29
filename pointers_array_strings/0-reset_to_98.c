#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - takes a pointer to an int as parameter and update the value to 98
 * @*n: pointer n
 */
void reset_to_98(int *n)
{
	int i = 98;
	*n = i;
	
	printf("%d", *n);
}
