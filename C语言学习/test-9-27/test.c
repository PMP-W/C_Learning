//错误的自引用
//struct Nobe
//{
//	int data;
//	struct Nobe next;
//};
////正确的自引用方式
//struct Nobe
//{
//	int data;
//	struct Nobe* next;
//};
//
//
//
////自引用是夹杂了typedef对匿名结构体类型的重命名
//typedef struct
//{
//	int data;
//	Node* next;
//}Nobe;
////这样写是错误的，匿名结构体内部提前使用了Node类型来创建成员变量，这是不行的
//
////正确的解决方案如下
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


////结构体变量的创建和初始化
//struct book
//{
//	char title[50];//书名
//	char author[30];//作者名
//	float value;//价格
//}library;
//struct Node
//{
//	int data;
//	struct book library_4;
//	struct Node* next;
//};
////结构体嵌套初始化
//struct Node n = { 20,
//				{.title = "The Pious Pirate and Devious Damsel",
//					.author = "Renee Vivotte",
//					.value = 30.5 },
//				& library
//};
//int main()
//{
//	//方式一，这种方式需要按顺序初始化
//	struct book library_1 = { "The Pious Pirate and Devious Damsel",
//							"Renee Vivotte",
//							30.5 };
//	//方式二，也可以不按照顺序初始化
//	struct book library_2 = { .title="The Pious Pirate and Devious Damsel",
//							.author="Renee Vivotte",
//							.value=30.5 };
//	//方式三，也可以在定义变量的同时赋值
//	struct book library_3 = { .title = "The Pious Pirate and Devious Damsel",
//							.author = "Renee Vivotte",
//							.value = 30.5 };
//
//	//此时，library与library_2的区别在于，前者时全局变量，后者时局部变量
//
//	//需要使用逗号分隔各个成员的初始化
//	//为了提高代码的可读性，我们可以让每个成语的初始化独占一行
//	return 0;
//}


////访问结构成员
//#include<stdio.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	short age;
//};
//void print(struct Stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//void set(struct Stu* ps)
//{
//	strcpy(ps->name, "王五");
//	ps->age = 30;
//}
//int main()
//{
//	struct Stu s = { "张三",20 };
//	print(s);
//	set(&s);
//	print(s);
//	return 0;
//}


//结构体大小   （内存对齐）
#include<stdio.h>
struct S1
{
    char c1;
    int i;
    char c2;
};
struct S2
{
    char c1;
    char c2;
    int i;
};
int main()
{
    printf("%zd\n", sizeof(struct S1));
    printf("%zd\n", sizeof(struct S2));
	return 0;
}