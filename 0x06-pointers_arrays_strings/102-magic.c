#include <stdio.h>

/**
* main - prints a[2] = 98 using pointer arithmetic
*
* Return: always 0
*/
int main(void)
{
int n;
int *p;

p = &n;

*(p + 5) = 98; /* this assigns 98 to a[2] */

printf("a[2] = %d\n", *(p + 7));

return (0);
}

