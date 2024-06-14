#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array to search in.
 * @size: Size of the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: Index of the first element for which the cmp function does not return 0,
 *         or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
