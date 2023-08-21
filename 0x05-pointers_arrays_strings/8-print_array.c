#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @arr: array name
 * @count: is the number of elements of the array to be printed
 * Return: arr and count inputs
 */
void print_array(int *arr, int count)
{
int i;
for (i = 0; i < (count - 1); i++)
{
printf("%d, ", arr[i]);
}
if (i == (count - 1))
{
printf("%d", arr[count - 1]);
}
printf("\n");
}
