#define _CRT_SECURE_NO_WARNINGS 1
//文件操作
//#include<stdio.h>
//int main()
//{
//	//FILE * fopen ( const char * filename, const char * mode );
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");//以二进制的形式书写到文件中
//	//fwrite
//	//size_t fwrite(const void* ptr, size_t size, size_t count, FILE * stream);
//	fwrite(&a, 4, 1, pf);//返回成功写入的元素总数
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////fopen的使用
////打开失败时，返回NULL
//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("myfile.txt", "w");
//    if (pFile != NULL)
//    {
//        fputs("\nfopen example\n", pFile);
//        fclose(pFile);
//    }
//    //支持至少同时FOPEN_MAX（20）个文件
//    return 0;
//}

//顺序读写
//int fgetc ( FILE * stream );
//#include<stdio.h>
//int main()
//{
//	FILE* pfile;
//	//写文件
//	//int fputc ( int character, FILE * stream );
//	pfile = fopen("myfile.text", "w+");
//	if (pfile == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputc('w', pfile);
//	fputc('z', pfile);
//	rewind(pfile);//返回文件的起始位置
//	//fclose(pfile);
//	//pfile = NULL;
//	////读文件
//	//FILE* pf = fopen("myfile.text", "r");
//	//if (pfile == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	int ch=fgetc(pfile);//成功，返回字符的ASCII码值，失败，返回EOF
//	printf("%c\n", ch);
//	ch = fgetc(pfile);
//	printf("%c", ch);
//	fclose(pfile);
//	pfile = NULL;
//	return 0;
//}
//拷贝文件
//#include<stdio.h>
//int main()
//{
//	FILE* pfile = fopen("data.txt", "r");
//	if (pfile == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pf = fopen("data_copy.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int ch=0;
//	while ((ch = fgetc(pfile)) != EOF)
//	{
//		fputc(ch, pf);
//	}
//	fclose(pfile);
//	pfile = NULL;
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgets，fputs
//#include<stdio.h>
//int main()
//{
//	//FILE* pf = fopen("data.txt", "r");
//	//读
//	//char arr[20] = "xxxxxxxxxxxxxxxxxx";
//	////fgets
//	////char * fgets ( char * str, int num, FILE * stream );
//	//if (pf != NULL)
//	//{
//	//	fgets(arr, 10, pf);//末尾添加'\0'
//	//	puts(arr);
//	//	fclose(pf);
//	//	pf = NULL;
//	//}
//
//	//读写
//	FILE* pf = fopen("data.txt", "w");
//	char arr[20] ;
//	fgets(arr, 20, stdin);
//	fputs(arr, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fscanf
//int fscanf(FILE* stream, const char* format, ...)
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data1.txt", "r");//注意使用方式
//	int a;
//	fscanf(pf, "%d", &a);
//	//rewind(pf);
//	//fprintf(pf, "%d", a);
//	printf("%d", a);
//	return 0;
//}

//sscanf
/* sscanf example */
//#include <stdio.h>
//
//int main()
//{
//	char sentence[] = "Rudolph is 12 years old";
//	char str[20];
//	int i;
//	sscanf(sentence, "%s %*s %d", str, &i);//sscanf跳过空格，制表符，换行符
//	//成功后，该函数返回参数列表中成功填充的项数
//	//失败，则返回 EOF
//	printf("%s -> %d\n", str, i);
//
//	return 0;
//}


///* sprintf example */
//#include <stdio.h>
//
//int main()
//{
//	char buffer[100]="xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
//	int n, a = 5, b = 3;
//	n = sprintf(buffer, "%d plus %d is %d", a, b, a + b);//末尾添加\0
//	printf("[%s] is a string %d chars long\n", buffer, n);
//	return 0;
//}


//文件的随机读写
//fseek根据文件指针的位置和偏移量来定位文件指针
/* fseek example */
#include <stdio.h>

int main()
{
	FILE* pFile;
	pFile = fopen("example.txt", "wb");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	//ftell
	//long int ftell(FILE * stream);
	long int n = ftell(pFile);
	printf("%ld", n);
	fputs(" sam", pFile);
	fclose(pFile);
	return 0;
}