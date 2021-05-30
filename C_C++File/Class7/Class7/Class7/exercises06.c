#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b, c) (a)>(b)? (a): (b)>(c)? (b):(c)

int main() {
	int a, b, c;
	printf("请输入三个整数，用空格隔开：");
	scanf("%d %d %d", &a, &b, &c);
	printf("三个数中最大值为：%d\n", MAX(a, b, c));

	system("pause");
	return 0;
}