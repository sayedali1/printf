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
	spChar type[] = {
		{'s', print_str}, {'c', print_ch},
		/* {'d', print_int}, {'i', print_int}, */
		{'\0', NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(pa, format);
	for (i = 0; (format[i] != '\0'); i++)
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
				*pCount += 2;
			}
		}
	}
	va_end(pa);
	return (count);
}
