#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	for (a = 1; a <= 9; a++) {
		for (b = a; b <= 9; b++) {
			printf("%d*%d=%-4d   ", a, b, a*b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}