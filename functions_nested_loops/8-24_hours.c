#include "main.h"
void jack_bauer(void)
{
	int n, hour1, hour2, min1, min2, total;

	for (total = 0; total <= 1440; total++)
	{   
		for (hour1 = 48; hour1 <= 50; hour1++)

			for (hour2 = 48; hour2 <= 57; hour2++)

				for (min1 = 48; min1 <= 53; min1++)

					for (min2 = 48; min2 <= 57; min2++)
					{
						putchar(hour1);
						putchar(hour2);
						putchar(':');
						putchar(min1);
						putchar(min2);
						putchar('\n');
					}
	}
}
