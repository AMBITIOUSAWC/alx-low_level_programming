#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is a function*
 * Return: Always 0
 */


/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
    int n, lastDigit;

    n = 980;
    lastDigit = n % 10;

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit == 0)
        printf("0\n");
    else
        printf("%d\n", lastDigit);

    return (0);
}

