#include "main.h"
#include <stdio.h>

/**
* more_numbers - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
    int i = 0;

    for (; i < 10; i++)
    {
        int i2 = 0;

        for (; i2 <= 14; i2++)
        {
            int u = i2 % 10;
            int dix = (i2 - u) / 10;

            _putchar('0' + dix);
            _putchar('0' + u);
        }
         _putchar('\n');

    }
    
}
