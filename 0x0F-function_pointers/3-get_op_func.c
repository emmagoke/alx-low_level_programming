#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - This function takes a character
 * pointer as argument.
 * @s: The input into get_to_func
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter. Example: get_op_func("+")
 *  should return a pointer to the function op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (op[i].op != NULL)
	{
		if (strcmp(op[i].op, s) == 0)
			break;
		i++;
	}
	return (op[i].f);
}
