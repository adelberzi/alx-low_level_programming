#include <stdio.h>

/**
 * main - prints a message
 * Return: 0
 */
int main(void)
{
    int i;
    
    printf("Infinite loop incoming :(\n");
    i = 0;
    
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }
    
    printf("\nInfinite loop avoided! \\o/\n");
    
    return (0);
}

