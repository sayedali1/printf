#include "main.h"

/**
*print_int - fun that print int
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 0
*/
int print_int(va_list pa, int *pCount)
{

	unsigned int  num = va_arg(pa, int);
	int powten = 1, i, j, n , len = 0, digit;

	if (num != 0)
	{
		if ((int)num < 0)
		{
			_putchar('-');
			*pCount += 1;
			num *= -1;
		}
		n = num;
		while (n != 0)
		{
			n /= 10;
			len++;
		}
		for (i = 1; i <= len - 1; i++)
		{
			powten *= 10;
		}

		for (j = 1; j <= i; j++)
		{
			digit = num / powten;
			_putchar(digit + '0');
			*pCount += 1;
			num -= digit * powten;
			powten /= 10;
		}
		/* _putInt(num, pCount); */
	}
	else
	{
		_putchar('0');
		*pCount += 1;
		return (1);
	}
	/* _putInt(num, pCount); */

	return (0);
}
