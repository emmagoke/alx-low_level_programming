#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0(Success)
 */
int main(void)
{
	int num1 = 48,  num2 = 48;
	int space = 32, comma = 44, newline = 10;

	while (num1 < 58)
	{
		while (num2 < 58)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 57 && num2 == 57)
			{
			}
			else
			{
				putchar(comma);
				putchar(space);
			}
			num2++;
		}
		num1++;
		num2 = 48;
	}
	putchar(newline);
	return (0);
}
