#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: int arg
* @argv: pointer of pointer
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (!argv[1] || !argv[2] || !argv[3] || !atoi(argv[1]) || !atoi(argv[3]))
	{
		printf("Error\n");
		return (1);
	}

	if (ops[i = 0].op[0] == argv[2][0] ||
	ops[i = 1].op[0] == argv[2][0] ||
	ops[i = 2].op[0] == argv[2][0] ||
	ops[i = 3].op[0] == argv[2][0] ||
	ops[i = 4].op[0] == argv[2][0] ||
	ops[i = 5].op[0] == argv[2][0])
	{
		if (!ops[i].op)
		{
			printf("Error\n");
			return (1);
		}

		int calc = (*ops[i].f) (atoi(argv[1], atoi(argv[3]));

		printf("%d\n", calc);
	}


	return (0);
}
