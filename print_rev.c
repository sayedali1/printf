#include "main.h"

/**
*print_rev - fun that reverse str
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 1
*/
int print_rev(va_list pa, int *pCount)
{
	int i;
	char *str = va_arg(pa, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = _strlen(str); i > 0; i--)
	{
		_putchar(str[i]);
		*pCount += 1;
	}
	return (1);
}
