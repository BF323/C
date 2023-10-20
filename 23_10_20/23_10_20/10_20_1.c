#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//打印一个范围内（1-100）3的倍数
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		if (i%3==0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int max = (a > b) ? a : b;
//	while (max%min!=0)//辗转相除法
//	{
//		n = max % min;
//		max = min;
//		min = n;
//	}
//	printf("最大公约数为：%d", min);
//	//for (i = min; i > 0; i--)
//	//{
//	//	if (a%i==0&&b%i==0)
//	//	{
//	//		printf("最大公约数为：%d", i);
//	//		break;
//	//	}
//	//}
//	return 0;
//}


//1-100中有几个9
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) //判断个位是不是9
//		{
//			n++;
//		}
//		if (i/10==9)     //判断十位是不是9
//		{
//			n++;
//		}
//	}
//	printf("n=%d", n);
//	return 0;
//}


//分数求和

//int main()
//{
//	double i = 0;
//	int n = 2; 
//	double h = 0;
//	while (n<=100)
//	{
//		i = 1.0 / (n - 1) - 1.0 / n;
//		h = h + i;
//		n += 2;
//	}
//	printf("%f", h);
//	return 0;
//}

//在10个数中找最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++) 
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for ( i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//99乘法表
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int n = 0;
//	for (x = 1; x < 10; x++)
//	{
//		for ( y = 1; y <= x; y++)
//		{
//				n = x * y;
//				printf("%d*%d=%-2d ", x, y, n);//%-2d 两位向左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


void JM()
{
	printf("************************\n");
	printf("*******1.开始游戏*******\n");
	printf("*******2.退出游戏*******\n");
	printf("************************\n");
}


void isSZ()
{
	int i = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入一个数字：");
		scanf("%d", &i);
		if (i > ret)
		{
			printf("猜大了\n");
		}
		else if (i < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	srand((unsigned int)time(NULL));
//	while (n != 2)
//	{
//		JM();
//		printf("请输入：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			isSZ();
//			continue;
//		case 2:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	}
//	return 0;
//}


//乘法口诀函数
void CF(int i)
{
	int x = 0;
	int y = 0;
	int n = 0;
	for (x = 1; x <= i; x++)
	{
		for (y = 1; y <= x; y++)
		{
			n = x * y;
			printf("%d*%d=%-2d ", x, y, n);//%-2d 两位向左对齐
		}
		printf("\n");
	}
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	CF(n);
//	return 0;
//}


 