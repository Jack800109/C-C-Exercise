#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int num = 0, length = 0;
	char a;

	scanf("%s", c);
	length = sizeof(c)/sizeof(c[0]);
	printf("数组长度为：%d\n", length);
	printf("数组：%s\n", c);
	for (int i = 0; i < length ; i++)
	{
		a = (char)(c[i]);
		printf("%c\n",a);
		//printf("int = %d\n", sizeof(a));
		if (a == "A") {
			num += 1;
		}
		//printf("num = %d\n", num);
	}
	printf("数组中A有%d个。\n", num);
	system("pause");
	return 0;
}

