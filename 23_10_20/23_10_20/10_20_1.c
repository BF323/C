#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//��ӡһ����Χ�ڣ�1-100��3�ı���
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

//�������������Լ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int max = (a > b) ? a : b;
//	while (max%min!=0)//շת�����
//	{
//		n = max % min;
//		max = min;
//		min = n;
//	}
//	printf("���Լ��Ϊ��%d", min);
//	//for (i = min; i > 0; i--)
//	//{
//	//	if (a%i==0&&b%i==0)
//	//	{
//	//		printf("���Լ��Ϊ��%d", i);
//	//		break;
//	//	}
//	//}
//	return 0;
//}


//1-100���м���9
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) //�жϸ�λ�ǲ���9
//		{
//			n++;
//		}
//		if (i/10==9)     //�ж�ʮλ�ǲ���9
//		{
//			n++;
//		}
//	}
//	printf("n=%d", n);
//	return 0;
//}


//�������

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

//��10�����������ֵ
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


//99�˷���
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
//				printf("%d*%d=%-2d ", x, y, n);//%-2d ��λ�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


void JM()
{
	printf("************************\n");
	printf("*******1.��ʼ��Ϸ*******\n");
	printf("*******2.�˳���Ϸ*******\n");
	printf("************************\n");
}


void isSZ()
{
	int i = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������һ�����֣�");
		scanf("%d", &i);
		if (i > ret)
		{
			printf("�´���\n");
		}
		else if (i < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
//		printf("�����룺");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			isSZ();
//			continue;
//		case 2:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	}
//	return 0;
//}


//�˷��ھ�����
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
			printf("%d*%d=%-2d ", x, y, n);//%-2d ��λ�������
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


 