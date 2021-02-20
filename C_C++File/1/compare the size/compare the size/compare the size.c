#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b) {
		if (b > c) {
			printf("从小到大：%d %d %d\n", c, b, a);
		}
		else {
			if(a>c){
				printf("从小到大：%d %d %d\n", b, c, a);
			}
			else {
				printf("从小到大：%d %d %d\n", b, a, c);
			}
		}
	}
	else{
		if (b< c) {
			printf("从小到大：%d %d %d\n", a, b, c);
		}
		else {
			if (a > c) {
				printf("从小到大：%d %d %d\n", c, a, b);
			}
			else {
				printf("从小到大：%d %d %d\n", a, c, b);
			}
		}
	}
	

	system("pause");
	return 0;
}