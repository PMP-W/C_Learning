#define _CRT_SECURE_NO_WARNINGS 1
//ʹ�ú���ʵ���������
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��


//#include<stdio.h>
//void init(int arr1[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = 0;
//	}
//
//}
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//void reverse(int arr1[],int arr2[], int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		arr2[i] = arr1[sz - i-1];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr2[i];
//
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	reverse(arr1,arr2,sz);
//	init(arr1,sz);
//	print(arr1, sz);
//
//	return 0;
//}



//X��ͼ��
//�ֱ��ӡ���������εĶԽ���
//#include <stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)//��Ϊ�к����Ǵ�0��ʼ��
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//�������кϲ�
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //����
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //����
//    int j = 0;
//    i = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)// ��
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}


/*
дһ�����ֲ��Һ���

���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.

int bin_search(int arr[], int left, int right, int key)
// arr �ǲ��ҵ�����
//left ��������±�
//right ��������±�
//key Ҫ���ҵ�����
*/

int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	int find = 0;//�����Ҳ���

	while (left<=right)
	{
		mid=left + (right - left) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if(arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
		find = 1;
		break;
         }
	}
	if (1==find)
	{
		printf("�ҵ��ˣ��±���%d", key);
}
	else
	{
		printf("û�ҵ�");
	}
}