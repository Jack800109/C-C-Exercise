#include <stdio.h>
#include <stdlib.h>

int main() {
	int m = 10, n = 5;
	int a[10][5] = { {00,01,02,03,04},{10,11,12,13,14,},{20,21,22,23,24},{30,31,32,33,34},{40,41,42,43,44},{50,51,52,53,54},{60,61,62,63,64},{70,71,72,73,74},{80,81,82,83,84},{90,91,92,93,94} };
	int b[5][10];

	for (int i=0; i < m;i++) {
		for (int o=0; o < n; o++)
		{
			b[o][i] = a[i][o];
		}
	}
	
	for (int o = 0; o < n; o++) {
		for (int i = 0; i < m; i++)
		{
			printf("%d\n", b[o][i]);
		}
	}
	


	system("pause");
	return 0;

}