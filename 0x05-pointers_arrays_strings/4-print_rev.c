#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to an int that will be changed
 * *
 * Return: void which means our answer is correct
 */
void print_rev(char *s)
{
int lenght, last;

lenght = 0;
while (s[lenght] != '\0')
{
lenght++;
}

last = lenght - 1;
for (; last >= 0; last--)
{
_putchar (s[last]);
}

_putchar ('\n');
}

