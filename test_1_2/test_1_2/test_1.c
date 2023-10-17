#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char bf1[] = "abc";
//	char bf2[] = { 'a','b','c' };
//	printf("%s\n", bf1);
//	printf("%s\n", bf2);
//	return 0;
//}



//int main()
//{
//	printf("hello world!");
//	return 0;
//}



//int main()
//{
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	return 0;
//}



//int main()
//{
//	printf("(Are you OK??)");
//	return 0;
//}



//int main()
//{
//	printf("%c",'\130');
//	return 0;
//}


//if语句
//int main()
//{
//	int n = 0;
//	printf("博德之门3or星空:(1/0)\n");
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		printf("博启！！");
//	}
//	else
//	{
//		printf("星空");
//	}
//	return 0;
//}


//while语句
//int main()
//{
//	int i = 0;
//	while (i<100)
//	{
//		printf("i=%d\n", i);
//		i++;
//	}
//	if (i == 100)
//		printf("i=%d\n", i);
//	return 0;
//}


//一点点函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//Add加法函数
//	printf("sum=%d", sum);
//	return 0;
//}
int Add(int x,int y)  //加法函数
{
	int z = 0;
	z = x + y;
	return z;
}


//1-100相加
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a<100)
//	{
//		a = a++;
//		b = a + b;
//	}
//	if (a==100)
//	printf("1加到100=%d", b);
//	return 0;
//}


// 整数/整数=整数
//int main()
//{
//	int a = 9 / 2;
//	//float a = 9 / 2;
//	//float a = 9 / 2.0;
//	//float a = 9 % 2;  //取余
//	printf("%f\n", a);
//	return 0;
//}


//计算数组元素个数
int main()
{
	int bf1[10] = { 0 };
	printf("%d\n", sizeof(bf1));             //数组总大小
	printf("%d\n", sizeof(bf1[0]));          //一个数组元素的大小
	int a = sizeof(bf1) / sizeof(bf1[0]);    //总大小/单个大小
	printf("%d\n", a);                       //数组元素个数
	return 0;
}