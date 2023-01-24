#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for varidic funs */
#include <unistd.h>/* for write fun  */
#include <stdlib.h>
#include <stdio.h>
/**
* struct sp_char - sturct for the special character
*@ch: symbole of the speacial character
*@fun: pointer to fun to print the argurment
*/
typedef struct sp_char
{
char ch;
int (*fun)(va_list, int *);
} spChar;
int _strlen(char *s);

int _printf(const char *format, ...);

int spIndex(char ch, struct sp_char *p);

int _putchar(char sp_ch);

int _putstr(char *str, int len);

void _putInt(unsigned int num, int *pCount);

int print_str(va_list pa, int *pCount);

int print_ch(va_list pa, int *pCount);

int print_int(va_list pa, int *pCount);

int print_bi(va_list pa, int *pCount);

int print_rev(va_list pa, int *pCount);

int print_unsigned(va_list pa, int *pCount);

int print_octal(va_list pa, int *pCount);

int print_lowerhex(va_list pa, int *pCount);

int print_upperhex(va_list pa, int *pCount);

int print_nonch(va_list pa, int *pCount);

int print_rot13(va_list pa, int *pCount);

#endif
