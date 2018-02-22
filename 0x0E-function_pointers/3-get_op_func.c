#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - returns specified function
 * @s: character representation of function
 * Return: specified function or operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (!s)
		return (NULL);
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
