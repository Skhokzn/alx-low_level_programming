#include "main.h"
/**
 * leet - Encodes a string into 1337
 *
 * @str: Pointer to the input string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
int i;
char leet_map[] = "AEOTL";
char leet_replacements[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{

if (str[i] >= 'a' && str[i] <= 'z')
{

int index = strchr(leet_map, str[i]) - leet_map;
if (index >= 0 && index <= 4)
{
str[i] = leet_replacements[index];
}
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
int index = strchr(leet_map, str[i] + 32) - leet_map;
if (index >= 0 && index <= 4)
{
str[i] = leet_replacements[index] - 32;
}
}
}

return (str);
}
