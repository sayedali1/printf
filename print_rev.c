#include "main.h"

/**
*print_rev - fun that reverse str
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 1
*/
int print_rev(va_list pa, int *pCount)
{
	int i, j;
	char *str = va_arg(pa, char *);
	char *rev;

	if (str == NULL)
	{
		str = "(null)";
	}

	rev = malloc(sizeof(char *) * (_strlen(str)));
	if (rev == NULL)
	{
		free(rev);
		return (-1);
	}

	j = 0;
	for (i = _strlen(str) - 1; i >= 0; i--)
	{
		rev[j] = str[i];
		j++;
	}
	_putstr(rev, _strlen(rev));
	pCount += _strlen(rev);

	free(rev);
	return (1);
}
