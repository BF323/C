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


//if���
//int main()
//{
//	int n = 0;
//	printf("����֮��3or�ǿ�:(1/0)\n");
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		printf("��������");
//	}
//	else
//	{
//		printf("�ǿ�");
//	}
//	return 0;
//}


//while���
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


//һ��㺯��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);//Add�ӷ�����
//	printf("sum=%d", sum);
//	return 0;
//}
int Add(int x,int y)  //�ӷ�����
{
	int z = 0;
	z = x + y;
	return z;
}


//1-100���
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
//	printf("1�ӵ�100=%d", b);
//	return 0;
//}


// ����/����=����
//int main()
//{
//	int a = 9 / 2;
//	//float a = 9 / 2;
//	//float a = 9 / 2.0;
//	//float a = 9 % 2;  //ȡ��
//	printf("%f\n", a);
//	return 0;
//}


//��������Ԫ�ظ���
int main()
{
	int bf1[10] = { 0 };
	printf("%d\n", sizeof(bf1));             //�����ܴ�С
	printf("%d\n", sizeof(bf1[0]));          //һ������Ԫ�صĴ�С
	int a = sizeof(bf1) / sizeof(bf1[0]);    //�ܴ�С/������С
	printf("%d\n", a);                       //����Ԫ�ظ���
	return 0;
}