#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Unknown:[%r]\n");
    len = _printf("Percent:[%%]\n");
    _printf("String:[%s]\n", "I am a string !");

    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    /* printf("%d\n",len); */
    return (0);
}
