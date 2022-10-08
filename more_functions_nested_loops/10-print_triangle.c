#include "main.h"
#include <stdio.h>

/**
* print_triangle - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @size: int parmameter
*/

void print_triangle(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int i2 = 0; i2 < size - i; i2++)
            _putchar(' ');
        _putchar('#');
        _putchar('\n');
    }
    _putchar('\n');
}
