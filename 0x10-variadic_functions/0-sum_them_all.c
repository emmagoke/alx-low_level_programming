#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - This function sum all the
 * parameter passed into it.
 * @n: The number of arguments.
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
