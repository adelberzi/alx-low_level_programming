#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: input
 * Return: None
 */
void reset_to_98(int *n)
{
int new_value = 98;
*n = new_value;
}

