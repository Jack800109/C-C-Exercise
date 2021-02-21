#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int length = 0;

	scanf("%s", c);

	for (int i = 0; c[i]; i++) {
		if (c[i]) {
			length += 1;
		}
	}
	for (; length; length--) {
		printf("%c", c[length - 1]);
	}
	printf("\n");

	system("pause");
	return 0;

}