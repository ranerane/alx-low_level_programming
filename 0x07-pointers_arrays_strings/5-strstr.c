#include "main.h"

/**
 * _strstr - matches any character specifie
 * @haystack: This is the C string to be scanned.
 * @needle::character in str1 that matches one of the characters in str2
 *
 * Return: string s that matches any character specified in accept
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])

{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}

