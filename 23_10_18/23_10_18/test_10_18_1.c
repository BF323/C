#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//��һ�����������в���Ԫ��n(���ֲ��ң�
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
//		// int mid=left+(right-left)/2;   //���Է�ֹleft+right���ᳬ����Χ
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
//			printf("Ԫ��n���±�Ϊ��%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ���");
//	}
//	return 0;
//}


//��ʾ����ַ��������ƶ����м���(�����ַ������)
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
//		system("cls");//system��һ���⺯��������ִ��ϵͳ������������Ļ��
//		printf("%s\n", b);//%s��ӡ���飡��
//		Sleep(1000);//����ʱ������Ϊ1000sm��
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


//��ʾ����ַ��������ƶ����м���(�����ַ������)
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
//		system("cls");//system��һ���⺯��������ִ��ϵͳ������������Ļ��ͷ�ļ�Ϊ#include <windows.h>
//		printf("%s\n", b);//%s��ӡ���飡��
//		Sleep(1000);//����ʱ������Ϊ1000sm�� ͷ�ļ�Ϊ#include <stdlib.h>
//	}
//	return 0;
//}


//��¼��������������¼ʧ��
//int main()
//{
//	int accounts[20];
//	char password[20];
//	printf("�������˺ţ�");
//	scanf("%d", accounts); //���鲻��&
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);          
//		if (strcmp(password,"s123456")==0) //�⺯��strcmp()���ڱȽ������ַ�������������==0
//		{                                  //ͷ�ļ�Ϊ#include <string.h>
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else if(i<2)
//		{
//			int a = 0;
//			a = 2 - i;
//			printf("�������\n������%d�λ���",a);
//		}
//		else
//		{
//			printf("��¼ʧ��");
//		}
//	}
//	return 0;
//}


//������


void JM()//����
{
	printf("**********************************\n");
	printf("***********1.��ʼ��Ϸ*************\n");
	printf("***********0.�˳���Ϸ*************\n");
	printf("**********************************\n");
}

//0~RAND_MAX(32767)  rand���ɷ�Χ
void game()//������
{
	//1.���������
	int ret = rand()%100+1;//rand����������ĺ��� %100ʹ������0-99  %100+1����1-100
	while (1)
	{
		printf("���0-100֮���������֣�");
		int a = 0;
		scanf("%d", &a);
		if (a>ret)
		{
			printf("�´���\n");
		}
		else if(a<ret)
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
int main()
{
	int select = 1;                 //time������ #include <time.h>
	srand((unsigned int)time(NULL));//srand����������������randʹ�ã����ڿ������������
	while (select)
	{
		JM();
		printf("�����룺>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			continue;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������������1��0��\n");
			continue;
		}
		break;
	}
	return 0;
}