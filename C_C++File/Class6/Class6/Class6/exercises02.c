#include <stdio.h>
#include <stdlib.h>

float maxf(float a, float b, float c) {
	float d;
	if (a>b && b>c) {
		d = a;
	}else if(b>a && b>c) {
		d = b;
	}else {
		d = c;
	}
	return d;
}

int main() {
	float a, b, c, d;
	printf("������������ֵ�ÿո�����");
	scanf("%f %f %f", &a, &b, &c);
	//printf("%f %f %f\n", a, b, c);
	d = maxf(a, b, c);
	printf("���������֮�������ǣ�%.3f\n", d);
	system("Pause");
	return 0;

}