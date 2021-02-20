#include <stdio.h>
#include <stdlib.h>
int main()
{
	double b = 0,c = 0,a = 3.156E7;
	
	printf("请输入年龄：");
	scanf("%lf",&b);

	c = b*a;

	
	printf("您的年两合集%lf秒\n",c);
	
	system("pause");
	return 0;
}