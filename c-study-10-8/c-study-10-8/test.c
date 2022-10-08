#define _CRT_SECURE_NO_WARNINGS 1

//柔性数组（C99标准下支持）

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int arr[];//结构体最后一个元素允许是大小未知的，但是其前面至少有一个成员
//};
//
//
//int main()
//{
//	printf("%d ", sizeof(struct S));//结果是8，计算的是a和b的大小，arr数组大小是0
//	//有柔性数组的结构体，内存分配用malloc进行动态分配，且分配大小要大于结构体大小，以适应柔性数组预期大小
//
//	//开辟
//	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);//又分配了四个int类型数据大小的空间
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	//使用
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
//	//调整
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
//	//使用
//	for (int i = 4;i < 10;i++)
//	{
//		s->arr[i] = i+1;
//	}
//	for (int i = 4;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	//释放
//	free(s);
//	return 0;
//}


//不用柔性数组，结构体里用指针
//在这里有好多问题，一方面，要多次malloc，这样会造成内存碎片，另一方面要多次realloc

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
	//开辟
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

	//使用
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

	//释放
	free(s);
	s = NULL;
	free(ptr);
	ptr = NULL;

	return 0;
}