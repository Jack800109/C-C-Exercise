#include <stdio.h>
#include <stdlib.h>

#define YU(a, b) (a)%(b)

int main() {
	int a, b;
	printf("�����������������ÿո������");
	scanf("%d %d", &a, &b);

	printf("%d����%d������Ϊ%d\n", a, b, YU(a, b));

	system("pause");
	return 0;

}