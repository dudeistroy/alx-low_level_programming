#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome_recursive - Helper function to check if a string
 * is a palindrome
 *
 * @s: The string to be checked
 * @left: The left index of the current substring
 * @right: The right index of the current substring
 *
 * Return: true if the substring is a palindrome, false otherwise
 */

bool is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (true);
	}

	if (s[left] != s[right])
	{
		return (false);
	}

	return (is_palindrome_recursive(s, left + 1, right - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_recursive(s, 0, length - 1));
}
