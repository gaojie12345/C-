#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("������2�����֣�\n");
	scanf("%d%d", &a, &b);
	int n = a;
	if (n > b)
		n = b;
	for (int i = n; i >= 1; i--)
	{
		if (a %i == 0 && b %i == 0)
		{
			printf("���Լ����%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}