#include <stdio.h>
#include <stdlib.h>

int main() {
	char c[100];
	int num = 0, length = 0;
	char a;
	
	scanf("%s", c);
	for (int i = 0; c[i]; i++) {
		if (c[i]) {
			length += 1;
		}
	}
	
	printf("���鳤��Ϊ��%d\n", length);
	printf("���飺%s\n", c);
	for (int i = 0; i < length ; i++)
	{
		a = c[i];
		printf("%c\n",a);
		if (a == 'A') {
			num += 1;
		}
	}
	printf("������A��%d����\n", num);
	system("pause");
	return 0;
}

