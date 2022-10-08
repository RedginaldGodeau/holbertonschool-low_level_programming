#include "main.h"
#include <stdio.h>

/**
* main - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

int main (void) 
{
    int i = 0;

    for (; i <= 100; i++)
    {
        if (i == 0 ) printf("%d ", i);
        else if(i % 3 == 0 && i % 5 == 0) printf("FizzBuzz ");
        else if(i % 5 == 0) printf("Buzz ");
        else if(i % 3 == 0) printf("Fizz ");
        else printf("%d ", i);

    }
    
    return (0);
}