#include "main.h"
#include <stdio.h>

/**
*_printf - fun that do same as printf
*@format: the string format
*Return: num of charchter printed
*/
int _printf(const char *format, ...)
{
	va_list pa; /* points to the arguments list */
	int i, j = 0;
	int count = 0;
	int *pCount = &count;
	/* contain all special char */
	spChar type[] = {
		{'s', print_str}, {'c', print_ch},
		{'d', print_int}, {'i', print_int},
		{'b', print_bi}, {'\0', NULL}
	};

	/* pCount = &count; */
	va_start(pa, format);

	for (i = 0; (format != NULL && format[i] != '\0'); i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]); /* print the char */
			*pCount += 1;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;/* get the chat after the % */
			/* get which spcial char match the char we point to now */
			j = spIndex(format[i], type);
			/* printf("%d\n",j); */
			if (j != -1) /* make sure it match */
				type[j].fun(pa, pCount); /*print the argument  */
			else
			{
				_putchar('%');
				_putchar(format[i]);
				/* i++; */
			}
		}
		
	}
	va_end(pa);
	return (count);
}
