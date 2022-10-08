#include "main.h"
#include <stdio.h>

/**
* print_diagonal - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

void print_diagonal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i2 = 0; i2 < i; i2++)
            _putchar(' ');
        _putchar('/');
        _putchar('\n');
    }
    _putchar('\n');
}
