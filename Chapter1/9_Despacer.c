#include <stdio.h>

int main()
{
	int c, b_blanking;

	c = b_blanking = 0;
	
	while ((c = getchar()) != EOF) {
		if (b_blanking = 0) {
			putchar(c); 	
		}
		if (c = ' ') {
			b_blanking = 1;
		}
		else 
			b_blanking = 0;
		
	}
//	print
}


