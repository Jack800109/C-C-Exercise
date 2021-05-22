#include <stdio.h>
#include <stdlib.h>

char chline(char a[2][2], int i, int j) {
	//printf("%c \n", a[j][i]);
	printf("第%d行第%d列是：%c\n", j, i, a[j-1][i-1]);
	return 0;
}

int main() {
	char b[2][2] = { {'a','b'}, {'f','g'} };
	chline(b,1,2);
	system("Pause");
	return 0;
}
