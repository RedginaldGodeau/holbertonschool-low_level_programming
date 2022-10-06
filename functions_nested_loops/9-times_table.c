#include "main.h"

/**
* times_table - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @c: int parmameter
*/

void times_table(void)
{
	int i, i2;
        for (i = 0; i <= 9; i++)
        {
                for(i2 = 0; i2 <= 9; i2++)
                {
                        int num = i * i2;
                        int unit = num % 10;
                        int dix = (num - unit) / 10;
			dix = (dix == 0 ? ' ' : dix + '0');

                        _putchar(dix);
			_putchar('0' + unit);
                        if(i2 != 9)
                        {
                       	 _putchar(',');
			
			if(i2 != 0)
                       		_putchar(' ');
                        }

                }
            _putchar('\n');
          }
}

