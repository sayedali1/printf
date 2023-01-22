#include "main.h"

/**
*print_int - fun that print int
*@pa: points to the list of arguments
*@pCount: pointer to counter
*/
void print_int(va_list pa, int *pCount)
{
	int num = va_arg(pa, int);

	_putInt(num, pCount);
}