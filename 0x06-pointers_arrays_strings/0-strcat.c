#include "main.h"

/**
 * main - check the code
 * 
 * Return: Always 0
 */

int main (void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    strcat(s1, s2);
    
    printf("%s", s1);

    return (0);
}
