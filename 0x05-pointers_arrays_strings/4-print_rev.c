#include <stdio.h>
#include <string.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
int main()
{
char str[] = "Hello, World!";
print_rev(str);
return 0;
}
