#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("������a��b\n",a,b);
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("����֮��Ϊ��\n");
	printf("a=%d b=%d", a, b);
	system("pause");
	return 0;
}