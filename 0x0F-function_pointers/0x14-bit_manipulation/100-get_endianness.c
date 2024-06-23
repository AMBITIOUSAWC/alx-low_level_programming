#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int num = 1;
char *endian = (char *)&num;

/* If the first byte of the integer is 1, the system is little endian */
return (*endian);
}
