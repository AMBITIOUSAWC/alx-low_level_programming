#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory and check for success
 * @b: Size of the memory to allocate
 *
 * Return: A pointer to the allocated memory or NULL on failure
 */
void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
{
/* You can choose a different error code if 98 is not appropriate */
return (NULL);
}

return (i);
}
