#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 *
 */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			printf("%02d:%02d\n", hour, minutes);
		}
	}
}
