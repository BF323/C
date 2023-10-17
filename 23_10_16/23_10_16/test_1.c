#include <stdio.h>
typedef unsigned int u_int;
//typedef 类型重命名
//int main()
//{
//	unsigned int a = 100;
//	u_int b = 100;
//	printf("%d %d", a, b);
//	return 0;
//}

////无static修饰 输出10个2（2 2 2 2 2 2 2 2 2 2）
//void sum()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}

//有static修饰 输出2-11（2 3 4 5 6 7 8 9 10 11）
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
//	//printf("%d\n", a);//找不到a报错
//	//static的修饰仅仅只是改变了变量的存储类型
//	//这使局部变量的生命周期和全局变量一样长，但作用域仍然是局部的
//	return 0;
//}



////extern 声明外部符号
//extern int v_sum;//引用了test_2的 v_sum
//int main()
//{
//	printf("%d", v_sum);
//	return 0;
//}

//static 修饰函数
//extern int ADD(int, int);
//int main()
//{
//	int a = 10;
//	int b = 22;
//	int sum = ADD(a, b);
//	printf("sun=%d", sum);
//	return 0;
//}


////指针
//int main()
//{
//	int a = 10;
//	//printf("%p\n",&a);//以地址的形式打印 
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	return 0;
//}

//结构体
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
	//结构体指针变量->成员名
}
int main()
{
	struct sdu a ={ "zhangsan", "nan", 20, "12345678912" };
	printf("%s,%s,%d,%s\n", a.name, a.sex, a.age, a.tele);//结构体对象.成员名
	print(&a);
	return 0;
}