#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b, c) (a)>(b)? (a): (b)>(c)? (b):(c)

int main() {
	int a, b, c;
	printf("�����������������ÿո������");
	scanf("%d %d %d", &a, &b, &c);
	printf("�����������ֵΪ��%d\n", MAX(a, b, c));

	system("pause");
	return 0;
}