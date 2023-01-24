#include "main.h"
/**
*postive_sign - fun to print the + flag
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void postive_sign(char ch, int j, va_list ap, int *pCount)
{


	if (ch == '+' && (j == 2 || j == 3))
	{
		if (va_arg(ap, int) >= 0)
		{
			_putchar('+');
			*pCount += 1;
		}
	}
}
/**
*space_sign - fun to print the space flag
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void space_sign(char ch, int j, va_list ap, int *pCount)
{
	if (ch == ' ' && (j == 2 || j == 3))
	{
		if (va_arg(ap, int) >= 0)
		{
			_putchar(' ');
			*pCount += 1;
		}
	}
}
/**
*window_sign - fun to print the windoflag
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void window_sign(char ch, int j, __attribute__((unused))va_list ap,
int *pCount)
{
	if (va_arg(ap, int) != 0)
	{
		if (ch == '#' && j == 7)
		{
			_putchar('0');
			*pCount += 1;
		}
		else if (ch == '#' && j == 9)
		{
			_putchar('0');
			_putchar('x');
			*pCount += 2;
		}
		else if (ch == '#' && j == 10)
		{
			_putchar('0');
			_putchar('X');
			*pCount += 2;
		}
	}
}
