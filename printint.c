#include "main.h"

/**
*print_int - fun that print int
*@pa: points to the list of arguments
*@pCount: pointer to counter
*Return: 0
*/
int print_int(va_list pa, int *pCount)
{
	int num = va_arg(pa, int);
	int powten = 1, i, j, n;

	if (num != 0)
	{
		if (num < 0)
		{
			_putchar('-');
			*pCount += 1;
			num *= -1;
		}
		n = num;
		for (i = 0; n /= 10; i++)
		{
			powten *= 10;
		}

		for (j = 0; j <= i; j++)
		{
			_putchar((num / powten) + '0');
			*pCount += 1;
			num %= powten;
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

	return (0);
}
