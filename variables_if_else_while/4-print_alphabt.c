#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except `q` and `e`
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			letter++;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
