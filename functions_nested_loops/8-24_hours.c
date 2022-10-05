#include "main.h"
#include <stdio.h>

void jack_bauer(void) {
	int h,m = {0};

	for (; h < 24 ; h++)
		for (; m < 60; m++)
			printf("%0d:%0d",h,m);
}

