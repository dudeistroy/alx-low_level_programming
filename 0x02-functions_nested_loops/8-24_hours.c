#include "main.h"
/**
 * jack_bauer - prints every minute of the day by Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
		}
	}
}
