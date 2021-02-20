#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;

	printf("请输入要查询的ASCII码：\n");
	scanf_s("%d",&a);
		
	printf("您查询的ASCII码对应的是：%c\n",a);

	system("pause");
	return 0;
}