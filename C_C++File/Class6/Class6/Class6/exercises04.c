#include <stdio.h>
#include <stdlib.h>

long factorial(int n) {
	int i;
	long result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int a=0,b;
	printf("请输入一个求阶乘的数字：");
	scanf("%d", &a);
	b = factorial(a);
	printf("%d的阶乘是：%d\n",a,b );
	system("Pause");
	return 0;
}