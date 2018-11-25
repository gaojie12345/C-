#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int Max = 0;
	int arr[10] = { 0 };
	printf("请输入任意10个整数;");
	for (i = 0; i <=9; i++)
		scanf("%d", &arr[i]);
	Max = arr[0];
	for (i = 0; i <=9; i++)
	{
		if (arr[i] > Max);
		Max = arr[i];
	}
	printf("最大的数为：%d", Max);
	system("pause");
	return 0;
}