#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - Prints an integer value
 * @arg: This is va_list type
 * Return: Nothing
 */
void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}

/**
 * print_char - Prints a character
 * @arg: This is va_list type
 * Return: Nothing
 */
void print_char(va_list arg)
{
	int c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_float - Prints a float
 * @arg: This is va_list type
 * Return: Nothing
 */
void print_float(va_list arg)
{
	float num = va_arg(arg, double);

	printf("%f", num);
}

/**
 * print_string - Prints a string
 * @arg: This is va_list type
 * Return: Nothing
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - This function prints anything
 * @format: is a list of types of arguments passed to the function
 * (c > char, i > integer, f > float, s > char *)
 * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	format_t type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i, j;
	char *sep = "";

	va_start(args, format);
	i = 0;
	while (*(format + i) && format)
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *type[j].type)
			{
				printf("%s", sep);
				type[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
