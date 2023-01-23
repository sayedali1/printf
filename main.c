#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Unknown:[%r]\n");
    len = _printf("Percent:[%%]\n");
    _printf("String:[%s]\n", "I am a string !");

    /* printf("%d\n",len); */
    return (0);
}
