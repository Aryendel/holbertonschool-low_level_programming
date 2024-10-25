#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int min1, min2, total;

	for (total = 0; total <= 1440; total++)
	{
/** Code pour les MINUTES */

		for (min1 = 48; min1 <= 54; min1++)

			for (min2 = 48; min2 <= 57; min2++)
			{
				putchar(min1);
				putchar(min2);
				putchar('\n');
			}
	}
