#include "main.h"

/**
*	_palin_helper - helps recs the master funciton
*
*	@s: char *
*
*	@l: int
*
*	@r: int
*
*	Return: 1 if palin, otherwise 0
**/
int	_palin_helper(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (s[l] != s[r])
		return (0);
	else
		return (_palin_helper(s, l + 1, r - 1));
}

/**
*	_strlen_recursion - calculate the length of the word.
*
*	@s: char *
*
*	Return: length value
**/

int _strlen_recursion(char *s)
{
	if (!s)
		return (0);
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
*	is_palindrome - checks if it _palindrome
*
*	@s: string
*
*	Return: 1 palindrome 0 not
**/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (0);
	return (_palin_helper(s, 0, len - 1));

}
