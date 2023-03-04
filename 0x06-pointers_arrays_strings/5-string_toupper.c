#include "main.h"
/**
 * string_toupper - change all lower case to uppercase
 * @n: pointer
 *
 * @str: pointer to the string to convert
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}

return (str);
}
