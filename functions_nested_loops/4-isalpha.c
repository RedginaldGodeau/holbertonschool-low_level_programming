#include "main.h"

/**
* _isalpha - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @c: int parmameter
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}

