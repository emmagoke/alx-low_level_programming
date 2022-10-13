#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function.
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num;

	va_start(args, n);
	if (*separator)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			if (i != (n - 1))
			{
				printf("%d", num);
				printf("%s", separator);
			}
			else
			{
				printf("%d", num);
			}
		}
	}
	printf("\n");
}
