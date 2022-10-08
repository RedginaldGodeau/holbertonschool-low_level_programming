#include "main.h"
#include <stdio.h>

/**
* print_square - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @size: int parmameter
*/

void print_square(int size)
{
    int i = 0;

    for (; i < size; i++)
    {
        int i2 = 0;

        for (; i2 < size; i2++)
            _putchar('#');
        _putchar('\n');
    }
}
