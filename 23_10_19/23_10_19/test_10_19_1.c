#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include "add.h"
#include <string.h>


//�����������α���������
//int main()
//{
//	int a,b;
//	printf("��Ϊa��b��ֵ��");
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d",a,b);
//	return 0;
//}


//�ж�һ�����ǲ�������
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	int b=isprime(a);
//	if (b==1)
//	{
//		printf("%dΪ����", a);
//	}
//	else
//	{
//		printf("%d��Ϊ����", a);
//	}
//	return 0;
//}

//��ӡһ����Χ�����е�����
//int main()
//{
//	int i;
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	scanf("%d %d", &b, &n);
//	for ( i = b; i <= n; i++)
//	{
//		if (isprime(i))
//		{
//			a++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n��������Ϊ%d", a);
//	return 0;
//}


//�ж��ǲ�������
//int main()
//{
//	int n,i;
//	for ( i = 1000; i <=2000; i++)
//	{
//		if (isyear(i) == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	scanf("%d", &n);
//	if (isyear(n)==1)
//	{
//		printf("%d�������ꡣ",n);
//	}
//	else
//	{
//		printf("%d�겻�����ꡣ",n);
//	}
//	return 0;
//}


//���ַ������������е���
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int s=0;
//	int unit = sizeof(a) / sizeof(a[0]);
//	scanf("%d", &s);
//	int b=isseek(a, s,unit);
//	if (b == -1)
//	{
//		printf("δ�ҵ�");
//	}
//	else
//	{
//		printf("Ԫ��n���±�Ϊ��%d", b);
//	}
//	return 0;
//}


//����һ���޷������Σ���˳���ӡ����ÿһλ(�����ݹ�)
void isprint(unsigned int n)
{
	if (n > 9)
	{
		isprint(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	isprint(n);
	return 0;
}