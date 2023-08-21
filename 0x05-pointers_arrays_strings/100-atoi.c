#include "main.h"

/**
 * myAtoi - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int myAtoi(char *str)
{
    int index = 0;
    int sign = 0;
    int result = 0;
    int length = 0;
    int flag = 0;
    int digit = 0;

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* Convert the string to an integer */
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

    /* Return the converted integer */
    if (flag == 0)
        return 0;

    return result;
}

