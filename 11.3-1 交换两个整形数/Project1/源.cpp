#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a=10, b=20,i;
//	i = a;
//	a = b;
//	b = i;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	scanf("%d%d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}