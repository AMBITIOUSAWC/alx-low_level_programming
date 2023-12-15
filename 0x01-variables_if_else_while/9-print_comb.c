#include <stdio.h>

int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
        putchar(digit + '0'), putchar(digit < 9 ? ',' : '\n'), putchar(digit < 9 ? ' ' : 0);

    return 0;
}

