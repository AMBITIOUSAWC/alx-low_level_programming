#include <stdio.h>

/*
 * The main function is the entry point of the program.
 * It initializes variables, performs operations, and prints the result.
 * In this example, it sets a value in the array 'a', creates a pointer 'p'
 * pointing to the variable 'n', and updates the value at (p + 5) to 98.
 * Finally, it prints the value of a[2].
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
