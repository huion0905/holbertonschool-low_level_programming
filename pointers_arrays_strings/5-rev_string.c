#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: string to be reverse
 * Return: Reverse string
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0, end;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
