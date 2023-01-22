#include "main.h"
/**
*print_str - fun that print str
*@pa: points to the list of arguments
*@pCount: pointer to counter
*/
void print_str(va_list pa, int *pCount)
{
	char *str; 

	str = va_arg(pa, char *);
	_putstr(str, _strlen(str));
	*pCount += _strlen(str);
}

/**
*print_ch - fun that print char
*@pa: points to the list of arguments
*@pCount: pointer to counter
*/
void print_ch(va_list pa, int *pCount)
{
	_putchar(va_arg(pa, int));
	*pCount += 1;
}