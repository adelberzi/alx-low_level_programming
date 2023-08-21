#include "main.h"

/**
 * myAtoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int myAtoi(char *str)
{
int index, sign, result, length, flag, digit;

index = 0;
sign = 0;
result = 0;
length = 0;
flag = 0;
digit = 0;

while (str[length] != '\0')
length++;

while (index < length && flag == 0)
{
if (str[index] == '-')
++sign;

if (str[index] >= '0' && str[index] <= '9')
{
digit = str[index] - '0';
if (sign % 2)
digit = -digit;
result = result * 10 + digit;
flag = 1;
if (str[index + 1] < '0' || str[index + 1] > '9')
break;
flag = 0;
}
index++;
}

if (flag == 0)
return (0);

return (result);
}

