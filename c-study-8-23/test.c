#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 0;i < 7;i++)
//	{
//		for (int j = 0;j < 7-i;j++)
//			printf(" ");
//		for (int k = 0;k < 2 * i - 1;k++)
//			printf("*");
//		printf("\n");
//	}
//	for (int i = 0;i < 13;i++)
//		printf("*");
//	printf("\n");
//	for (int i = 6;i >=0;i--)
//	{
//		for (int j = 0;j < 7 - i;j++)
//			printf(" ");
//		for (int k = 0;k < 2 * i - 1;k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//
//void sxh(const int a)
//{
//	int temp1= a,temp2=a, count = 0,sum=0;
//	while (temp1 / 10)
//	{
//		count++;
//		temp1 /= 10;
//	}
//	count++;
//	if (a<10)
//		printf("%d\n", a);
//	else
//	{
//		for (int b=0;b<count;b++)
//		{
//			int c = 1;
//			int every = temp2 % 10;
//			for (int i = 0;i < count;i++)
//			{
//				c *= every;
//			}
//			sum += c;
//			temp2 /= 10;
//		}
//		if (sum == a)
//		{
//			printf("%d\n",a);
//			return;
//		}
//		else
//			return;
//	}
//
//}
//
//int main()
//{
//	for (int i = 0;i < 100000;i++)
//	{
//		sxh(i);
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int a;
//    int i;
//    int temp = 0;
//    int sum = 0;
//    scanf("%d", &a);
//    for (i = 1;i <= 5;i++)
//    {
//        temp = temp * 10 + a;
//        sum = sum + temp;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a;
//    while ((a = getchar()) != EOF)
//    {
//        if (a != '\n')    //主要判断是不是回车
//        {
//            if (a >= 'A' && a <= 'z') 
//                printf("%c is an alphabet.\n", a);
//            else 
//                printf("%c is not an alphabet.\n", a);
//        }
//        
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<malloc.h>
//void order(int* p)
//{
//	assert(p);
//	int* j = (int*)malloc(10 * sizeof(int));
//	int* o = (int*)malloc(10 * sizeof(int));
//	int* jishu = j;
//	int* oushu = o;
//	if (j == NULL || o == NULL)
//	{
//		printf("malloc error!");
//		return;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		if (*(p + i) % 2)
//		{
//			*j++ = *(p + i);
//		}
//		else
//		{
//			*o++ = *(p + i);
//		}
//	}
//	*j = '\0';
//	*o = '\0';
//	while (*jishu)
//	{
//		*p = *jishu;
//		jishu++;
//		p++;
//	}
//	while (*oushu)
//	{
//		*p = *oushu;
//		oushu++;
//		p++;
//	}
//}
//
//int main()
//{
//	int a[10] = { 2,4,34,67,23,55,6,88,10,44 };
//	order(a);
//	for (int i = 0;i < 10;i++)
//		printf("%d ", a[i]);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)
void LeftReverse(char* a, int size, int n)
{
	for (int i = 0; i < n; i++) {
		char t = a[0];
		for (int j = 0; j < size; j++) {
			a[j] = a[j + 1];
		}
		a[size - 1] = t;
	}
}
void RightReverse(char* a, int size, int n)
{
	for (int i = 0; i < n; i++) {
		char t = a[size - 1];
		for (int j = size - 2; j >= 0; j--) {
			a[j + 1] = a[j];
		}
		a[0] = t;
	}
}
int Judge(char* a, char* b)
{
	char* s;
	int i;
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 != len2) {
		return 0;
	}
	for (i = 0; i <= len1; i++) {
		s = a;
		LeftReverse(s, len1, i);
		if (strcmp(s, b) == 0) {
			return 1;
		}
		s = a;
		RightReverse(s, len1, i);
		if (strcmp(s, b) == 0) {
			return 1;
		}
	}
	return 0;
}
void main()
{
	char a[] = "AABCD";
	char b[] = "BCDAA";
	int n = Judge(a, b);
	if (n == 0) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
	system("pause");
}
