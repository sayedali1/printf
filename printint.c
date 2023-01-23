#include "main.h"

/**
*print_int - fun that print int
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 0
*/
int print_int(va_list pa, int *pCount)
{
	int n = va_arg(pa, int);
	int num, last = n % 10, digit, exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		*pCount += 1;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			*pCount +=1;
		}
	}
	_putchar(last + '0');

	/* _putInt(num, pCount); */

	return (0);
}
