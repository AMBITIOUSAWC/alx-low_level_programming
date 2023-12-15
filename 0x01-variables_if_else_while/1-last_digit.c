#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
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

