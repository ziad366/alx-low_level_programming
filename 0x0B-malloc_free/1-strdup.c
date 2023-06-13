#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: pointer.
 */

char *_strdup(char *str)
{
int length = 0, i = 0;
char *copy;

if (str == NULL)
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

copy = (char *)malloc(sizeof(char) * length);
for (i; i < length; i++)
{
copy[i] = str[i];
}
copy[length] = '\0';

return (copy);
}
