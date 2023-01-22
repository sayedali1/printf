#include "main.h"
/**
*_putchat - fun that prints a char
*@sp_ch: character we want to print on terminal
*/
void _putchar(char sp_ch)
{
	write(1, &sp_ch, 1); /* 1 for write on the stander output */
}

