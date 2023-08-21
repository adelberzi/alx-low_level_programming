#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int length = 0;
int index = 0;
char *ptr = str;
int i;

while (*ptr != '\0')
{
ptr++;
length++;
}
index = length - 1;
for (i = 0; i <= index; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

