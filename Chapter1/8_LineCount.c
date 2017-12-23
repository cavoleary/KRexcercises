#include <stdio.h>

int main()
{
	int nl,blanks,c ;

	c = blanks = nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == ' ')
			++blanks; 
	}
	printf( "%d\n %d", nl, blanks);
}

