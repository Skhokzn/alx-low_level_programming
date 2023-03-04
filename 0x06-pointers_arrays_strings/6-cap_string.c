#include "main.h"

/**
 * cap_string - Capitalizes all words of string
 * @str: the string to be capitalized
 *
 * @str: Pointer to the input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i;

if the first character is a lowercase letter
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}

for (i = 1; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
}

return (str);
}
