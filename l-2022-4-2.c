#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char a = '\101'; //�����101Ϊ�˽�������Ϊ65�ʱ�ʾ�ַ�A���˽������ȡֵΪ\177
//	char b = '\x60'; //����ġ�\x60��Ϊʮ�����ƣ�ʮ���������ȡֵΪ\7f
//	printf("%d\t%d", '\177', '\x60');
//	// �˽������ȡֵΪ\177--127
//	// ʮ���������ȡֵΪ\7f--96
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
	printf("��������������:>\n");
	scanf("%d%d", &a, &b);
	Max(a,b);
	return 0;
}