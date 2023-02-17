#include <stdio.n>
/**
 * main - Program that print the size of various computer types
 * Return 0 (on success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)/n", (unsigned long)sizeog(a));
printf("Size of an int: %lu byte(s)/n", (unsigned long)sizeog(b));
printf("Size of a long int: %lu byte(s)/n", (unsigned long)sizeog(c));
printf("Size of a long long int: %lu byte(s)/n", (unsigned long)sizeog(d));
printf("Size of a float: %lu byte(s)/n", (unsigned long)sizeog(e));
return (0)
}