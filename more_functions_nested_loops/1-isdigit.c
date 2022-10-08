#include "main.h"
#include <stdio.h>

/**
* _isdigit - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @c: int parmameter
*/

int _isdigit(int c)
{
    return (c >= '0' && c <= '9' ? 1 : 0);
}
