#include "main.h"

/**
*print_bi - fun that print binary num
*@pa: points to the list of arguments
*@pCount: pointer to counter
*/
void print_bi(va_list pa, int *pCount)
{
	unsigned int num = va_arg(pa, int);
	/* allocate memory to store the binary num */
	unsigned int *arr = malloc(sizeof(unsigned int));
	int i = 0;

	if(num == 0)/* if num is zero */
	{
		_putInt(0, pCount);
	}
	while (num != 0)
	{
		/* add the binary num forward */
		arr[i++] = num % 2;
		num /= 2;
	}
	i--;
	while (i >=0)
	{
		_putInt(arr[i--], pCount); /* print the binary backword */
	} 
}
