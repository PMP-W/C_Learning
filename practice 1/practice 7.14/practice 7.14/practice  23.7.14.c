#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NAME "w"//���üӷֺ�
#define ADDRESS "China"
int main()
{
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	return 0;
}

#define Days_Year 365
int main()
{
	/*int age = 18;
	int day;
	day = age * Days_Year;
	printf("�ҽ���%d�꣬��%d��", age, day);
	return 0;*/
	int age, day;
	age = 0;
	printf("�����������ˣ�\n");
	scanf("%d", &age);
	day = age * Days_Year;
	printf("�ҽ���%d�꣬��%d��\n", age, day);
	return 0;
}

int jolly();//Ҫ�ӷֺ�
int dengy();
int main()
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
int jolly()
{
	printf("For he's a jolly good fellow!\n");
	return 0;
}
int deny()
{
	printf("Which nobody can deny!\n");
	return 0;
}


int sm();
int main()
{
	sm(), sm(), sm(); \
	printf("\n");
	sm(), sm();
	printf("\n");
	sm();
	return 0;
}
int sm()
{
	printf("Smile!");
	return 0;
}

int one_three();
int main()
{
	printf("Starting now :\n");
	one_three();
	printf("Done");
	return 0;
}
int one_three()
{
	printf("one\n");
	printf("two\n");
	printf("three\n");
	return 0;
}