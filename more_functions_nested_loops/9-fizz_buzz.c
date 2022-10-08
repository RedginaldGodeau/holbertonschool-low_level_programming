#include "main.h"
#include <stdio.h>

/**
* main - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

int main (void) 
{
    int i = 1;

    for (; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0) printf("FizzBuzz");
        else if(i % 5 == 0) printf("Buzz");
        else if(i % 3 == 0) printf("Fizz");
        else printf("%d", i);
        if(i != 100) putchar(' ');
    }
    putchar('\n');
    return (0);
}