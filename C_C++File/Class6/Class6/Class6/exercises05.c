#include <stdio.h>
#include <stdlib.h>

void salami(int num)
{
	int count;
	for (count = 1; count <= num; num--)
	{
		printf("O salami mio!");
	}
	return 0;
}

int main() {
	salami(5);
	system("Pause");
	return 0;
}