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
        if(i % 3 == 0) printf("Buzz");
        if(i % 5 == 0) printf("Buzz");
        else printf("%d", i);

    }
    
    return (0);
}