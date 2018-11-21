#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = j*i;
			printf("%d*%d=%d ", i, j, k);
		}
		printf("\n");
    }
	system("pause");
		return 0;
}