#include "main.h"

/**
 * _isalpha - check if character is alphabetic (uppercase or lowercase)
 * @c: character to check
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int  _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
