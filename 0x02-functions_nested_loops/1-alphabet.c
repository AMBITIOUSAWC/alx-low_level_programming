/* main.h file */
#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);
int _putchar(char c);

#endif /* MAIN_H */

/* 1-alphabet.c file */
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

