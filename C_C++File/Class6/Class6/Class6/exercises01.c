#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a, b, c;
	printf("请输入两个整数,用空格间隔：");
	scanf_s("%d %d",&a ,&b);
	c = sum(a, b);
	printf("a+b=%d",c);
	system("Pause");
	return 0;
}