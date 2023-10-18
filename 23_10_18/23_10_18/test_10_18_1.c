#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//在一个有序数组中查找元素n(二分查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		// int mid=left+(right-left)/2;   //可以防止left+right不会超出范围
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("元素n的下标为：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到。");
//	}
//	return 0;
//}


//演示多个字符从两端移动向中间汇聚(两个字符串相等)
//int main()
//{
//	char a[] = "Turned into powder!";
//	char b[] = "###################";
//	int sz_a = sizeof(a) / sizeof(a[0]);
//	//int sz_b = sizeof(b) / sizeof(b[0]);
//	int left_a = 0;
//	//int left_b = 0;
//	int right_a = sz_a-2;
//	//int right_b = sz_b-2;
//	while (left_a <= right_a)
//	{
//		//b[left_b] = a[left_a];
//		//b[right_b] = a[right_a];
//		b[left_a] = a[left_a];
//		b[right_a] = a[right_a];
//		//left_a = ++left_b;
//		//right_a = --right_b;
//		left_a++;
//		right_a--;
//		system("cls");//system是一个库函数，可以执行系统命令（这里清空屏幕）
//		printf("%s\n", b);//%s打印数组！！
//		Sleep(1000);//控制时间间隔（为1000sm）
//		//int i = 0;
//		//while (i<sz_a)
//		//{
//		//	printf("%c", b[i]);
//		//	i++;
//		//}
//		//printf("\n");
//	}
//	return 0; 
//}


//演示多个字符从两端移动向中间汇聚(两个字符串相等)
//int main()
//{
//	char a[] = "Turned into powder!";
//	char b[] = "###################";
//	int sz_a = sizeof(a) / sizeof(a[0]);
//	int left_a = 0;
//	int right_a = sz_a - 2;
//	while (left_a <= right_a)
//	{
//		b[left_a] = a[left_a];
//		b[right_a] = a[right_a];
//		left_a++;
//		right_a--;
//		system("cls");//system是一个库函数，可以执行系统命令（这里清空屏幕）头文件为#include <windows.h>
//		printf("%s\n", b);//%s打印数组！！
//		Sleep(1000);//控制时间间隔（为1000sm） 头文件为#include <stdlib.h>
//	}
//	return 0;
//}


//登录密码错误三次则登录失败
//int main()
//{
//	int accounts[20];
//	char password[20];
//	printf("请输入账号：");
//	scanf("%d", accounts); //数组不用&
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);          
//		if (strcmp(password,"s123456")==0) //库函数strcmp()用于比较两个字符串，如果相等则==0
//		{                                  //头文件为#include <string.h>
//			printf("登陆成功\n");
//			break;
//		}
//		else if(i<2)
//		{
//			int a = 0;
//			a = 2 - i;
//			printf("密码错误\n您还有%d次机会",a);
//		}
//		else
//		{
//			printf("登录失败");
//		}
//	}
//	return 0;
//}


//猜数字


void JM()//界面
{
	printf("**********************************\n");
	printf("***********1.开始游戏*************\n");
	printf("***********0.退出游戏*************\n");
	printf("**********************************\n");
}

//0~RAND_MAX(32767)  rand生成范围
void game()//猜数字
{
	//1.生成随机数
	int ret = rand()%100+1;//rand生成随机数的函数 %100使其生成0-99  %100+1生成1-100
	while (1)
	{
		printf("请猜0-100之间的随机数字：");
		int a = 0;
		scanf("%d", &a);
		if (a>ret)
		{
			printf("猜大了\n");
		}
		else if(a<ret)
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
int main()
{
	int select = 1;                 //time函数库 #include <time.h>
	srand((unsigned int)time(NULL));//srand配合生成随机数函数rand使用，用于控制随机数生成
	while (select)
	{
		JM();
		printf("请输入：>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			continue;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请输入1或0：\n");
			continue;
		}
		break;
	}
	return 0;
}