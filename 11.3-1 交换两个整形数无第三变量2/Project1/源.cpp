#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a, b;
//	printf("ÇëÊäÈë2¸öÊı£º");
//	scanf("%d  %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d  %d\n", a, b);
//	system("pause");
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%d", a, b);
	system("pause");
	return 0;
}