#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str1[] = "hello bit";
	char str2[] = "hello bit";

	const char* str3 = "hello bit";
	const char* str4 = "hello bit";

	if (str1 == str2)
		printf("Yes\n");
	else
		printf("no\n");
	if (str3 == str4)
		printf("Yes\n");
	else
		printf("no\n");

	return 0;
}