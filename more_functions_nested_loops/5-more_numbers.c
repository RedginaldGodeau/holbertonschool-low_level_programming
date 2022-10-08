#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void print_most_numbers()
{
    for (int i = 0; i < 10; i++)
    {
        for (int i2 = 0; i2 <= 14; i2++)
        {
            int u = i2 % 10;
            int dix = (i2 - u) / 10;

            _putchar('0' + dix);
            _putchar('0' + u);
        }
         _putchar('\n');

    }
    
}
