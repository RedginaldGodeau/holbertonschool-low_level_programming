#include "main.h"
#include <stdio.h>

/**
* _isdigit - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @c: char parmameter
*/

int _isdigit(char c)
{
    return (c >= '0' && c <= '9' ? 1 : 0);
}
