#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function
 *
 * it prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
char hour_tens, hour_digit, minute_tens, minute_digits;

for (hour_tens = '0'; hour_tens <= '2'; hour_tens++)
{
	for (hour_digit = '0'; hour_digit <= '9'; hour_digit++)
	{
		if (hour_tens == '2' && hour_digit > '3')
		{
			break;
		}
		for (minute_tens = '0'; minute_tens <= '5'; minute_tens++)
		{
			for (minute_digits = '0'; minute_digits <= '9'; minute_digits++)
			{
				_putchar(hour_tens);
				_putchar(hour_digit);
				_putchar(':');
				_putchar(minute_tens);
				_putchar(minute_digits);
				_putchar('\n');
			}
		}
	}
}
}
