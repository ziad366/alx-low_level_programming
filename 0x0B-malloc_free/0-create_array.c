#include <stdio.h>

/**
 * create an array of chars, and initializes it with a specific char.
 * @c: character to fill the array with it
 * @size: the size of the memory to allocate
 *
 * Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
int i;
char *arr;

if (size == 0)
{
return (NULL);
}

*arr = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
arr[i] = c;
return (arr);
}
}