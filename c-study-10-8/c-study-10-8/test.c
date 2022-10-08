#define _CRT_SECURE_NO_WARNINGS 1

//�������飨C99��׼��֧�֣�

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int arr[];//�ṹ�����һ��Ԫ�������Ǵ�Сδ֪�ģ�������ǰ��������һ����Ա
//};
//
//
//int main()
//{
//	printf("%d ", sizeof(struct S));//�����8���������a��b�Ĵ�С��arr�����С��0
//	//����������Ľṹ�壬�ڴ������malloc���ж�̬���䣬�ҷ����СҪ���ڽṹ���С������Ӧ��������Ԥ�ڴ�С
//
//	//����
//	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);//�ַ������ĸ�int�������ݴ�С�Ŀռ�
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	//ʹ��
//	s->a = 10;
//	s->b = 5.5;
//	for (int i = 0;i < 4;i++)
//		s->arr[i] = i+1;
//
//	printf("%d  %.2f\n", s->a,s->b);
//	for (int i = 0;i < 4;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//
//
//	//����
//	struct S* ptr = (struct S*)realloc(s, sizeof(struct S) + 10 * sizeof(int));
//	if (!ptr)
//	{
//		printf("realloc fail!");
//		exit(-1);
//	}
//	else
//	{
//		s = ptr;
//	}
//	//ʹ��
//	for (int i = 4;i < 10;i++)
//	{
//		s->arr[i] = i+1;
//	}
//	for (int i = 4;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	//�ͷ�
//	free(s);
//	return 0;
//}


//�����������飬�ṹ������ָ��
//�������кö����⣬һ���棬Ҫ���malloc������������ڴ���Ƭ����һ����Ҫ���realloc

#include<stdio.h>
#include<stdlib.h>

struct S
{
	int a;
	float b;
	int* arr;
};

int main()
{
	//����
	struct S*  s = (struct S*)malloc(sizeof(struct S));
	if (!s)
	{
		printf("malloc fail!");
		exit(-1);
	}

	int* ptr = (int*)malloc(sizeof(int) * 10);
	if (!ptr)
	{
		printf("malloc fail!");
		exit(-1);
	}
	s->arr = ptr;

	//ʹ��
	s->a = 10;
	s->b = 5.5;
	for (int i = 0;i < 10;i++)
	{
		s->arr[i] = i + 1;
	}

	printf("%d %.2f\n", s->a, s->b);

	for (int i = 0;i < 10;i++)
	{
		printf("%d ", s->arr[i]);
	}

	//�ͷ�
	free(s);
	s = NULL;
	free(ptr);
	ptr = NULL;

	return 0;
}