#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Length(char* str)
//{
//	int count = 0;
//	while (*str!= '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int length = Length(arr);
//	printf("%d", length);
//	return 0;
//}


//ÄæÐòÊä³ö
//#include <stdio.h>
//int Length(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        str++;
//        count++;
//    }
//    return count;
//}
//
//int main() {
//    char str[10000];
//    gets( str);//ÓÃÓÚ¶ÁÈ¡º¬¿Õ¸ñµÄ×Ö·û´®
//    char* p = str;
//    int count = 0;
//    count = Length(str);
//    for (int i = count - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}


//×Ö·û´®×óÐý
#include <stdio.h>
void left(char* arr, int size, int n)
{
	for (int i = 0; i < n; i++)
	{
		char temp = *arr;
		for (int j = 0; j < size - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + size - 1) = temp;
	}
}
int main()
{
	char arr[20] = "ABCDEF";
	printf("%s\n", arr);
	int sz = strlen(arr);
	int n = 3;
	left(arr, sz, n);
	printf("×óÐýÈý¸ö×Ö·û£º%s\n", arr);
	return 0;
}


#include<stdio.h>
void Levorotation(char* ch,int k)
{

}
int main()
{
	char ch[100] = "ABCDE";
	int k = 0;
	scanf("%d", &k);
	Levorotation();


	return 0;
//}



