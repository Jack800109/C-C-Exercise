#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a, b, c;
	printf("��������������,�ÿո�����");
	scanf_s("%d %d",&a ,&b);
	c = sum(a, b);
	printf("a+b=%d",c);
	system("Pause");
	return 0;
}