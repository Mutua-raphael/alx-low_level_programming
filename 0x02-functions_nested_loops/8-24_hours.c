#include "main.h"

/**
 * jack_bauer - gives every minute of his day
 * start form 00:00 to 23:59
 */

void jack_bauer(void)
{
	int t, m;

	t = 0;

	while (t < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		t++;
	}
}
