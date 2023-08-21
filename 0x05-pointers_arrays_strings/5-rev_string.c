#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
int length = strlen(s);
int i;
char temp;
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
int main()
{
char str[] = "Hello, World!";
printf("Original string: %s\n", str);
rev_string(str);
printf("Reversed string: %s\n", str);   
return 0;
}
