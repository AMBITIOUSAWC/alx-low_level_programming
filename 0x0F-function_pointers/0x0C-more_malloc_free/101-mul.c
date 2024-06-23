#include "main.h"

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul_digit - multiplies a char with a string and returns the result
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 *
 * Return: pointer to the result, or NULL on failure
 */
char *mul_digit(char n, char *num, int num_index)
{
	int j, mul, mulrem;
	char *res;

	res = malloc((num_index + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);

	init(res, num_index + 1);
	mulrem = 0;

	for (j = num_index; j >= 0; j--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		res[j + 1] = mul % 10 + '0';
	}

	res[0] = mulrem + '0';

	return (res);
}

/**
 * add_strings - adds two strings and returns the result
 * @s1: first string to add
 * @s2: second string to add
 * @s1_index: last non NULL index of s1
 * @s2_index: last non NULL index of s2
 *
 * Return: pointer to the result, or NULL on failure
 */
char *add_strings(char *s1, char *s2, int s1_index, int s2_index)
{
	int i, j, k, add, addrem;
	char *res;

	res = malloc((s1_index + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);

	init(res, s1_index + 1);
	addrem = 0;

	for (i = s1_index, j = s2_index, k = s1_index + 1; i >= 0; i--, j--, k--)
	{
		add = (s1[i] - '0') + (s2[j] - '0') + addrem;
		addrem = add / 10;
		res[k] = add % 10 + '0';
	}

	res[0] = addrem + '0';

	return (res);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	char *t1, *t2;
	int i;

	t1 = mul_digit(n, num, num_index);
	if (t1 == NULL)
		return (NULL);

	t2 = add_strings(t1, dest, num_index + 1, dest_index);
	if (t2 == NULL)
		return (NULL);

	for (i = 0; i <= num_index + 1; i++)
		dest[dest_index - i] = t2[num_index + 1 - i];

	free(t1);
	free(t2);

	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}

	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';

	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;

	for (l2 = 0; argv[2][l2]; l2++)
		;

	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));

	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}

	init(a, ln - 1);

	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);

		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}

	_print(a, ln - 1);
	return (0);
}

