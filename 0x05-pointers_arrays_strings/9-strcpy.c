#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *destination, char *source)
{
int length = 0;
int index = 0;
while (*(source + length) != '\0')
{
length++;
}
for (; index < length; index++)
{
destination[index] = source[index];
}
destination[length] = '\0';
return destination;
}
