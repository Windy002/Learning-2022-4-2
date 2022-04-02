#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char a = '\101'; //这里的101为八进制数，为65故表示字符A。八进制最大取值为\177
//	char b = '\x60'; //这里的’\x60’为十六进制，十六进制最大取值为\7f
//	printf("%d\t%d", '\177', '\x60');
//	// 八进制最大取值为\177--127
//	// 十六进制最大取值为\7f--96
//	return 0;
//}

void Max(int x, int y)
{
	if (x > y)
		printf("%d",x);
	else 
		printf("%d", y);
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数:>\n");
	scanf("%d%d", &a, &b);
	Max(a,b);
	return 0;
}