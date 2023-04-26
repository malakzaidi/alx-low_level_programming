#include "main.h"

/*
 * This is a C program that prints out the string "Holberton"
 * using ASCII codes. It includes the standard header file "main.h"
 * and defines the main function, which returns an integer value of 0
 * to indicate successful execution.
 */
/**
 * main - Entry point of the program
 *
 * Description: Prints out the string "Holberton" using ASCII codes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;
sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
}
