#include <stdio.h>
#include <stdlib.h>



int main() {
	printf("1!+2!+...+9!+10!=%1d\n", sum1(10));
	system("Pause");
	return 0;
}


//求阶乘
long factorial(int n) {
	int i;
	long result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

//求累加的和
long sum1(long n) {
	int i;
	long result = 0;
	for (i = 1; i <= n; i++) {
		result += factorial(i);
	}
	return result;
}
