#include <stdio.h>
/**
* main - prints the value of a[2]
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int *p;
int a[5] = {0, 0, 1024, 0, 0};
p = &n;
/* Add your line of code here */
*(p + 5) = 98;
/**
* At this point, the value of a[2] has been modified to 98,
* but we are not allowed to use the variable a or modify the variable p.
*
* We can use pointer arithmetic to access the value at a[2] through
* the pointer p. Since p points to n, we can add 5 to p to reach a[2].
*/
printf("a[2] = %d\n", *(p + 5));
return (0);
}

