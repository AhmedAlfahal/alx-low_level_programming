#include "3-calc.h"

/**
*	op_add - sum @a + @b
*
*	@a: int
*
*	@b: int
*
*  Return: the sum
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*	op_sub - subtraction @a & @b
*
*	@a: int
*
*	@b: int
*
*  Return: the sub result
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*	op_mul - muliplication @a & @b
*
*	@a: int
*
*	@b: int
*
*  Return: the multiplication result
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*	op_div - dividion of  @a & @b
*
*	@a: int
*
*	@b: int
*
*  Return: the division result
**/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
*	op_mod - modules @a & @b
*
*	@a: int
*
*	@b: int
*
*  Return: the modules result
**/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
