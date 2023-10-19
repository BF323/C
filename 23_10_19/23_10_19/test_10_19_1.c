#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include "add.h"
#include <string.h>


//交换两个整形变量的内容
//int main()
//{
//	int a,b;
//	printf("请为a和b赋值：");
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("交换后a=%d b=%d",a,b);
//	return 0;
//}


//判断一个数是不是素数
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	int b=isprime(a);
//	if (b==1)
//	{
//		printf("%d为素数", a);
//	}
//	else
//	{
//		printf("%d不为素数", a);
//	}
//	return 0;
//}

//打印一个范围内所有的素数
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
//	printf("\n质数总数为%d", a);
//	return 0;
//}


//判断是不是闰年
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
//		printf("%d年是闰年。",n);
//	}
//	else
//	{
//		printf("%d年不是闰年。",n);
//	}
//	return 0;
//}


//二分法查有序数组中的数
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int s=0;
//	int unit = sizeof(a) / sizeof(a[0]);
//	scanf("%d", &s);
//	int b=isseek(a, s,unit);
//	if (b == -1)
//	{
//		printf("未找到");
//	}
//	else
//	{
//		printf("元素n的下标为：%d", b);
//	}
//	return 0;
//}


//接受一个无符号整形，按顺序打印它的每一位(函数递归)
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