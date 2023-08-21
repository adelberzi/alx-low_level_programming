#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
char *ptr = str; // Create a pointer to iterate over the string
while (*ptr != '\0')
{
_putchar(*ptr++); // Print the character and increment the pointer
}
_putchar('\n');
}
