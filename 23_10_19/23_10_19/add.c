#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//�����������α���������
void Swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//�ж�һ�����ǲ�������
int isprime(int x)
{
	int i = 2;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


//�ж��ǲ�������
int isyear(int x)
{
	if (x % 400 == 0)     //((x%400==0)||(x%4==0)&&(x%100!=0))
	{
		return 1;
	}
	else if ((x % 4 == 0) && (x % 100 != 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//���ַ������������е���
int isseek(int x[], int n, int unit)
{
	int left = 0;
	int right = unit - 1;
	int mid = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x[mid] < n)
		{
			left = mid + 1;
		}
		else if (x[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}