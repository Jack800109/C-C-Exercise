#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int num = 0, length = 0;

	scanf("%s", c);
	length = sizeof(c)/sizeof(c[0]);
	printf("%d\n", length);
	printf("%s\n", c);
	system("pause");
	return 0;
}

