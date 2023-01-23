#include "main.h"
#include <stdio.h>
/**
*call_sp - fun that get the fun and call it
*@ch: char we want to check
*@p: pointer to out struct
*@pCount: pointer to our counter
*@pa:pointer to our arguments
*/

void call_sp(char ch, struct sp_char *p, int *pCount, va_list pa)
{

	int j = spIndex(ch, p);

	if (j != -1) /* make sure it match */
		p[j].fun(pa, pCount); /*print the argument  */
	else
	{
		_putchar('%');
		_putchar(ch);
		*pCount += 2;
	}
}
/**
*_printf - fun that do same as printf
*@format: the string format
*Return: num of charchter printed
*/
int _printf(const char *format, ...)
{
	va_list pa; /* points to the arguments list */
	int i, count = 0;
	int *pCount = &count;
	spChar type[] = {
		{'s', print_str}, {'c', print_ch},
		{'d', print_int}, {'i', print_int},
		{'\0', NULL}};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(pa, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]); /* print the char */
			*pCount += 1;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;/* get the chat after the % */
			call_sp(format[i], type, pCount, pa);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			_putchar(format[i]);
			*pCount += 1;
		}
	}
	va_end(pa);
	return (count);
}
