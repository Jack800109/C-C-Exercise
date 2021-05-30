#include <stdlib.h>
#include <stdio.h>

int main() {
	unsigned b = 8;
	unsigned d, e;
	float c;

	d = (b >> 2);
	e = (b >> 1);
	c = d / e;
	//c = (b >> 2) / (b >> 1);
	printf("(b >> 2) / (b >> 1) = %f\n", c);
	
	
	system("pause");
	return 0;

}