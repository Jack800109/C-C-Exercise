#include <stdlib.h>
#include <stdio.h>

int maxv(int a, int b){
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int num1, num2, maxVal;
	printf("Input two numbers: ");
	scanf("%d %d", &num1, &num2);
	maxVal = maxv(num1, num2);
	printf("The max number: %d\n", maxVal);
	system("Pause");
	return 0;
}