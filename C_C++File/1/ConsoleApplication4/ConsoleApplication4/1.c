#include <stdio.h>
int main()
	{
		int i = 1, j;
		while (1) { // ���ѭ��
		j = 1;
		while (1) { // �ڲ�ѭ��
			 printf("%-4d", i*j);
			 j++;
			 if (j>4) break; //�����ڲ�ѭ��
			
		}
		printf("\n");
		i++;
		 if (i>4) break; // �������ѭ��
		}
	
		return 0;
	}