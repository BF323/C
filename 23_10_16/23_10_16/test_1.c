#include <stdio.h>
typedef unsigned int u_int;
//typedef ����������
//int main()
//{
//	unsigned int a = 100;
//	u_int b = 100;
//	printf("%d %d", a, b);
//	return 0;
//}

////��static���� ���10��2��2 2 2 2 2 2 2 2 2 2��
//void sum()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}

//��static���� ���2-11��2 3 4 5 6 7 8 9 10 11��
//void sum()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		sum();
//		i++;
//	}
//	//printf("%d\n", a);//�Ҳ���a����
//	//static�����ν���ֻ�Ǹı��˱����Ĵ洢����
//	//��ʹ�ֲ��������������ں�ȫ�ֱ���һ����������������Ȼ�Ǿֲ���
//	return 0;
//}



////extern �����ⲿ����
//extern int v_sum;//������test_2�� v_sum
//int main()
//{
//	printf("%d", v_sum);
//	return 0;
//}

//static ���κ���
//extern int ADD(int, int);
//int main()
//{
//	int a = 10;
//	int b = 22;
//	int sum = ADD(a, b);
//	printf("sun=%d", sum);
//	return 0;
//}


////ָ��
//int main()
//{
//	int a = 10;
//	//printf("%p\n",&a);//�Ե�ַ����ʽ��ӡ 
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	return 0;
//}

//�ṹ��
struct sdu
{
	char name[20];
	char sex[20];
	int age;
	char tele[20];
};

void print(struct sdu* s)
{
	printf("%s,%s,%d,%s\n", (*s).name, (*s).sex, (*s).age, (*s).tele);
	printf("%s,%s,%d,%s", s->name, s->sex, s->age, s->tele);
	//�ṹ��ָ�����->��Ա��
}
int main()
{
	struct sdu a ={ "zhangsan", "nan", 20, "12345678912" };
	printf("%s,%s,%d,%s\n", a.name, a.sex, a.age, a.tele);//�ṹ�����.��Ա��
	print(&a);
	return 0;
}