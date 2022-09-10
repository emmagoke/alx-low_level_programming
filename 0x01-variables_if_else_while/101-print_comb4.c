#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int num1 = 48, num2 = 49, num3 = 50;
	int space = 32, comma = 44, newline = 10;

	while (num1 < 56)
	{
		while (num2 < 57)
		{
			while (num3 < 58)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 == 55 && num2 == 56 && num3 == 57)
				{
				}
				else
				{
					putchar(comma);
					putchar(space);
				}
				num3++;
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
		num3 = num1 + 2;
	}
	putchar(newline);
	return (0);
}
