#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////判断一个数的奇偶
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("a为偶数\n");
//	}
//	else
//	{
//		printf("a为奇数");
//	}
//	return 0;
//}

////输出1-100之间的奇数
//int main()
//{
//	//int a = 0;
//	//while (a <= 100)
//	//{
//	//	if (a % 2 != 0)
//	//	{
//	//		printf("%d ", a);
//	//	}
//	//	a++;
//	//}
//
//	int a = 1;
//	while (a<=100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

////输入一串生日（2001828）分别输出年月日，并且在个位数时前面补0
//int main()
//{
//	int year, month, day;
//	//输入
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//输出
//	printf("year=%d\nmonth=%02d\nday=%02d", year, month, day);
//	return 0;
//}
//


//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	printf("%d;%.2f,%.2f,%.2f", id, c, math, eng);
//	return 0;
//}


////比较大小
//int main()
//{
//	int arr[5];
//	int i = 0;
//	while (i < 5)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i<5)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}



////计算球的体积
//int main()
//{
//	double n = 3.1415926;
//	double r;
//	scanf("%lf", &r);
//	double v =  4.0/3 * r * r * r * n;
//	printf("球的体积为V=%.3lf", v);
//	return 0;
//}


////BMI计算
//int main()
//{
//	double weight=0.0;
//	double high=0.0;
//	printf("请输入体重(KG) 身高(CM):");
//	scanf("%lf %lf", &weight, &high);
//	double BMI = weight / (high / 100.0) / (high / 100.0);
//	printf("BMI=%.2lf", BMI);
//	return 0;
//}



//求1！...n!的和
int main()
{
	int i = 1;
	int n = 0;
	int ar = 1;
	int h = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ar = ar * i;
		h = h + ar;
	}
	printf("%d", h);
	return 0;
}
