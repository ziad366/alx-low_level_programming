#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer.
*/

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, counter;
char *concatStr;

if (s1 != NULL)
{
while (s1[i] != '\0')
{
i++;
}
}

if (s2 != NULL)
{
while (s2[j] != '\0')
{
j++;
}
}

concatStr = (char *)malloc(sizeof(char) * (i + j) +1);

if (concatStr == NULL)
{
return (NULL);
}

for (counter = 0; counter < i; counter++)
{
concatStr[counter] = s1[counter];
}

for (; counter < (i + j); counter++)
{
concatStr[counter] = s2[k];
k++;
}

concatStr[i + j] = '\0';
return (concatStr);
}
