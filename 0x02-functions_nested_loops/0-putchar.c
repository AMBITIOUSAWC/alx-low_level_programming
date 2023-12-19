/* main.h file */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */

/* _putchar.c file */
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/* Your implementation of _putchar comes here */
	return (0); /* replace with your code */
}

/* 0-putchar.c file */
#include "main.h"

/**
 * main - Entry point, prints "_putchar", followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

