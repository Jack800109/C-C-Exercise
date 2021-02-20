#include <stdio.h> 
#include <stdlib.h>
int main() {
	float area, r, pi = 3.14;
	scanf_s("%f\n", &r);
	area = pi * r * r;
	printf("area = %.2f\n", area);
	system("pause");
	return 0;
}