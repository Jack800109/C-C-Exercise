#include <stdlib.h>
#include <stdio.h>

#define MA(x) x*(x-1) 


int main() {
	int a = 1, b = 2, c;
	c = MA(1 + a + b);
	printf("MA(1 + a + b) = %d\n", c);

	system("pause");
	return 0;
}