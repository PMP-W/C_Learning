#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
//int main()
//{
//	int num = 1;
//	int temperature = -30;//有些变量有正负，有些只有正
//
//	unsigned short age = INT_MIN;//需要引头文件
//	return 0;
//}


//size_t是专门为sizeof设置的一个类型
//size_t的本质是unsigned int
//size_t类型的数据在打印的时候，格式应该使用%zd
//int main()
//{
//	size_t num = 1;
//	printf("%zd\n", sizeof(char));//sizeof是一个操作符，计算的是变量所占内存的大小，单位是字节
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//a = a + 1;
//	//a += 1;
//	//a++;
//	++a;
//	printf("a=%d", a);
//	return 0;
//}

//前置++，后置++
//int main()
//{
//	int a = 5;
//	//int b = ++a;//前置++：先++，后使用        a=a+1,b=a
//	int b = a++;//后置++：先使用，后++        b=a,a=a+1
//	printf("a=%d\n", a);//6
//	printf("b=%d\n", b);//6      5
//
//	return 0;
//}
// 
// 
// 
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	a = 0;
//	b = 0;
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n",Max(a,b) );
//	return 0;
//}



//判断一个数是否为奇数


//
//int main()
//{
//	int a = 0;
//
//	printf("请输入一个数：");
//		scanf_s("%d", &a);
//	if (a % 2 == 0)
//		printf("这个数是偶数\n");
//	else
//		printf("这个数是奇数");
//
//
//	return 0;
//}


//输出1-100之间的奇数
int main()
{
	int a = 1;
	while (a <= 100)
	{
		
		if (a % 2 == 1)
			printf("%d ", a);
		a++;



	}


	return 0;
}