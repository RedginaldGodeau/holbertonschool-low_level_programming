#include "main.h"
#include <stdio.h>

/**
* jack_bauer - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @c: int parmameter
*/

void jack_bauer(void) {
	int h,m;

        for (h = 0; h < 24 ; h++)
                for (m = 0; m < 60; m++)
                        printf("%02d:%02d\n",h,m);	
}

