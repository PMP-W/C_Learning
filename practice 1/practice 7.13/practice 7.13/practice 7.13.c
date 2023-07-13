#define _CRT_SECURE_NO_WARNINGS 1
//platinum.c--your weight in platinum
#include<stdio.h>
//int main()
//{
//	float weight;
//	float value;
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//	scanf("%f", &weight);
//	value = 1700.0 * weight * 14.583;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that!If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//	return 0;
//}

//int main()
//{
//
//	int x = 100;
//
//	printf("dec=%d,octal=%o,hex=%x\n", x, x, x);
//	printf("dec=%d,octal=%#o,hex=%#x\n", x, x, x);0//%o输出八进制，%x输出十六进制
//
//	return 0;
//}

int main()
{
	char arr[] = {'a','b','c',0};
	printf("%s\n", arr);
	printf("%d", strlen(arr));

	return 0;
}