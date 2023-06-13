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
int length = 0, i;
char *copy;

if (str == NULL)
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

copy = (char *)malloc(sizeof(char) * length + 1);

if (copy == NULL)
{
return (NULL);
}

for (i = 0; i < length; i++)
{
copy[i] = str[i];
}
copy[length] = '\0';

return (copy);
}
