#include "main.h"
#include <stdio.h>
/**
positive_or_negative - Determines if a number is positive or negative
@n: The number to be checked */ void positive_or_negative(int n) { if (n > 0) printf("%d is positive\n", n); else if (n < 0) printf("%d is negative\n", n); else printf("0 is neither positive nor negative\n"); }
/**
main - Test function for positive_or_negative
Return: 0
*/
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
