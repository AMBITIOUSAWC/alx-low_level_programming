#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to function
 * @name: String to print
 * @f: Pointer to function that prints a string
 *
 * Description: This function prints a string `name` using a function pointer `f`.
 *              If `name` or `f` is NULL, it does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
