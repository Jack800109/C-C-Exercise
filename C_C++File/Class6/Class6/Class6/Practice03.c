#include <stdio.h>
#include <stdlib.h>

int sumi(int n) {
	int i;
	for (i = n - 1; i >= 1; i--) {
		n += i;
	}
	printf("The inner n =%d\n", n);

	return n;
}

int main() {
	int n, total;
	printf("Input a number:");
	scanf("%d", &n);
	total = sumi(n);
	printf("The outer n = %d \n", n);
	printf("1+2+3+...+(n-1)+n = %d\n", total);

	system("Pause");
	return 0;
}