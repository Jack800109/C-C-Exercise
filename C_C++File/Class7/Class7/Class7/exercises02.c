#include <stdlib.h>
#include <stdio.h>

#define SUB(X,Y) (X)*Y 


int main() {
	int a = 3, b = 4, c;
	c = SUB(a++, b++);
	printf("SUB(a++, b++) = %d\n", c);
	
	
	system("pause");
	return 0;

}