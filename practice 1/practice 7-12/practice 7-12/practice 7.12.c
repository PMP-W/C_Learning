#define _CRT_SECURE_NO_WARNINGS 1
//two_func.c--һ���ļ��а�����������
#include<stdio.h>
//void butler();//ANSI/ISO C����ԭ��//�޷���ֵ
//int main()
//{
//	printf("I will summon the butler function.\n");
//	butler();
//	printf("Yes.Bring me some tea and writeable DVDS.\n");
//
//	return 0;
//}
//void butler()//�������忪ʼ
//{
//	printf("You rang,sir?\n");
//}
// 
// 
// 
// 
// ���  There were 3020 words and 350 lines.
//int main()
//{
//	int words, lines;
//	words = 3020;
//	lines = 350;
//	printf("There were %d words and %d lines.", words, lines);
//
//	return 0;
//}




//�����ϰ
//int main()
//{
//	printf("wzh\n");
//	printf("w\n");
//	printf("zh\n");
//	printf("wzh\n");
//	return 0;
//}

//#define DAYS_PER_YEARS 365//����Ԥ����ָ��ָ��һ�������
//int main()
//{
//	int age,days;
//	age= 18;
//	days = age * DAYS_PER_YEARS;
//	printf("Your age is %d ,and it is %d days.\n",age, days);
//
//	return 0;
//}



//void jolly();
//void deny();
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//
//	return 0;
//}
//void jolly()
//{
//	printf("For he's a jool good fellow!\n");
//
//}
//void deny()
//{
//	printf("Which nobody can deny!");
//}

//
//void br();
//void ic();
//int main()
//{
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf(",\n");
//	br();
//	printf("\n");
//	return 0;
//}
//void br()
//{
//	printf("Brazil,Russia");
//}
//void ic()
//{
//	printf("India,China");
//}
//

//int main()
//{
//	int toes, toes_2, toes2;
//	toes = 10;
//	toes_2 = 2 * toes;
//	toes2 = toes * toes;
//	printf("toes=%d\n",toes);
//	printf("toes������=%d\n", toes_2);
//	printf("toes��ƽ��=%d\n", toes2);
//
//
//	return 0;
//}

//void s();
//int main()
//{
//	s(), s(), s();
//	printf("\n");
//	s(), s();
//	printf("\n");
//	s();
//
//	return 0;
//}
//void s()
//{
//	printf("Smile!");
//}

void one_three();
void two();
int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	return 0;
}
void one_three()
{
	printf("one\n");
	two();
	printf("three\n ");
}
void two()
{
	printf("two\n");
}