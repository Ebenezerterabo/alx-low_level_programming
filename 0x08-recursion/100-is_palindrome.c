#include "main.h"

/**
 * _strlen - A function to get the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * checkPalindrome - A function to check if a string is palindrome
 * @s: the string
 * @start: first pointer
 * @end: second pointer
 *
 * Return: an integer
 */

int checkPalindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (checkPalindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - A function that returns 1 if a string
 * is a palindrome
 * @s: the string
 *
 * Return: an integer
 */

int is_palindrome(char *s)
{

	return (checkPalindrome(s, 0, _strlen(s) - 1));
}
