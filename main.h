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
    void (*fun)(va_list, int *);
}spChar;

int _strlen(char *s);

int _printf(const char *format, ...);

int spIndex(char ch, struct sp_char *p);

void _putchar(char sp_ch);

void _putstr(char *str, int len);

void _putInt(int num, int *pCount);

void print_str(va_list pa, int *pCount);

void print_ch(va_list pa, int *pCount);

void print_int(va_list pa, int *pCount);

void print_bi(va_list pa, int *pCount);


#endif