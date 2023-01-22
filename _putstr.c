#include "main.h"
/**
*_putstr - fun that print str
*@str: pointer to the str we want to print
*@len: lenth of the str
*/
void _putstr(char *str, int len)
{
    write(1, str, len);
}
