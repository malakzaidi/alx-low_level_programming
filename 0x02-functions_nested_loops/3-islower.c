#include "main.h"
/**
* _islower - check if character is lowercase.
* @c: character to check if it is lowercase.
*
* Return: 1 if lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
