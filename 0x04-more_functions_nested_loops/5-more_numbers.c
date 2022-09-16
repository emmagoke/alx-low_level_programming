#include "main.h"

/**
 * more_numbers - Prints 1 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, num, newline = 10;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar(newline);
	}
}
