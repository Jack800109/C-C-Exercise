#include <stdio.h>
#include <stdlib.h>

int main() {
	double hum = 0;
	printf("�����Ƿ��п������꣺\n");
	printf("���������ʪ�ȣ�0.0-100.0����");
	scanf("%lf", &hum);
	if (hum<=100 && hum>55.4) {
		printf("Yes\n");
	}else if (hum>=0 && hum<=55.4) {
		printf("No\n");
	}else {
		printf("error\n");
	}

	system("pause");
	return 0;	
}