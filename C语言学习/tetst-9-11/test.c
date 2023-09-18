#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int check_system()
//{
//	int a = 1;
//	return (*(char *)&a);
//}
//int main()
//{
//	if (check_system() == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}


//模拟实现memmove
//#include<stdio.h>
//void* my_memmove(void* destination, const void* source, size_t num)
//{
//	void* ret = destination;
//	if ((char*)source < (char*)destination)//后->前
//	{
//		destination = (char*)destination + num - 1;
//		source = (char*)source + num - 1;
//
//		while (num--)
//		{
//			*(char*)destination = *(char*)source;
//			destination = (char*)destination - 1;
//			source = (char*)source - 1;
//		}
//	}
//	else//前->后
//	{
//		while (num--)
//		{
//			*(char*)destination = *(char*)source;
//			destination = (char*)destination + 1;
//			source = (char*)source + 1;
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//模拟实现atoi
#include<stdio.h>
#include<assert.h>
int my_atoi(const char* str)//0-9的ASCII码值是48-57
{
	const char* temp = str;
	assert(str);
	while ( *temp== ' ')//跳过前面的空格字符
	{
		temp++;
	}
	int num = 0;//将字符转化为整型保存在num中
	while (*temp >= 48 && *temp <= 57)
	{
		num =num*10+( *temp - '0');
		if (*(temp+1) < 48 || *(temp+1)>57)//判断后面的字符是否是数字字符
		{
			return num;
		}
		temp++;
	}
	return 0;
}
int main()
{
	char arr[] = "1234";
	printf("%d", my_atoi(arr));

	return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char a[] = "";
//	char b[] = "     ";
//	char c[] = "66666";
//	char d[] = "    @. 66ab";
//	char e[] = "    6666@qq.com";
//	char f[] = "520hehe";
//	char g[] = "i love you 555";
//
//	printf("%d\n", atoi(a));
//	printf("%d\n", atoi(b));
//	printf("%d\n", atoi(c));
//	printf("%d\n", atoi(d));
//	printf("%d\n", atoi(e));
//	printf("%d\n", atoi(f));
//	printf("%d\n", atoi(g));
//
//	return 0;
//}