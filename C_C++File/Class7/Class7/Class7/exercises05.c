#include <stdio.h>
#include <stdlib.h>

#define YU(a, b) (a)%(b)

int main() {
	int a, b;
	printf("请输入两个整数，用空格隔开：");
	scanf("%d %d", &a, &b);

	printf("%d除以%d的余数为%d\n", a, b, YU(a, b));

	system("pause");
	return 0;

}