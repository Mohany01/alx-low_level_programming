#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length])
{
length++;
}
for (j = 0; src[j] ; j++, length++)
{
dest[length] = src[j];
}
return (dest);
}
