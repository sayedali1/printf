#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for varidic funs */
#include <unistd.h>/* for write fun  */
#include <stdio.h>
#include <stdlib.h>
/**
*struct sp_chat - sturct for the special character
*@ch: symbole of the speacial character
*@fun: pointer to fun to print the argurment
*/
typedef struct sp_char
{
    char ch;
    int (*fun)(va_list, int *);
}spChar;

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


#endif