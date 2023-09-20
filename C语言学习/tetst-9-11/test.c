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


#define _CRT_SECURE_NO_WARNINGS 1
//strcmp模拟实现

#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1&& str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1-*str2;
}
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcdf";
	int ret = strcmp(arr1, arr2);
	printf("%d", ret);

	return 0;
}


//strstr，模拟实现
#include<stdio.h>
#include<string.h>
const char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	if (! *str2)
	{
		return str1;
	}
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 && *s2&&!(*s1-*s2))//s1,s2遇到\0停止，*s1和*s2不同也停止
		{
			s1++;
			s2++;
		}
		if (!*s2)//遇到\0
			return p;
		p++;//没找到，可能的初始位置++
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbcdefg";
	char arr2[] = "bcd";
	char* cp=my_strstr(arr1, arr2);
	strncpy(cp, "lll",3);
	printf("%s", arr1);
	return 0;
}


//模拟实现strncpy
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* destination, const char* source, size_t num)
{
	assert(destination && source);
	int i = 0;
	char* ret = destination;
	for (i = 0; i < num&&source[i]!='\0'; i++)  //既要小于num，也要在source的范围内
	{
		*destination = *source;
		destination++;
		source++;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcde";
	char arr2[20] ;//arr2的空间要足够大
	char* p = my_strncpy(arr2, arr1,sizeof(arr1));
	printf("%s", arr2);

	return 0;
}

//模拟实现strncat
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* destination, const char* source, size_t num)
{
	assert(destination && source);
	char* ret = destination;
	int i = 0;
	while (*destination)
	{
		destination++;
	}
	for (i = 0; i < num; i++)
	{
	    *destination = *source;
		destination++;
		source++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "abcd";
	char arr2[] = "efg";
	char* p = my_strncat(arr1, arr2,2);
	printf("%s", p);

	return 0;
}


//模拟实现memcpy --- ***
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* destination, const void* source, size_t num)
{
	void* ret = destination;
	assert(destination && source);
	while (num--)
	{
		*(char*)destination = *(char*)source;
		destination = (char*)destination + 1;
		source = (char*)source + 1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr2[i]);
	}
	return 0;
}


//判断是否是小写字母
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a = 'a';
	char B = 'B';
	int ret_a = islower(a);
	int ret_B = islower(B);
	printf("%d %d", ret_a, ret_B);
	return 0;
}

toupper
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a = 'a';
	char A = toupper(a);
	printf("%c", A);


	return 0;
}