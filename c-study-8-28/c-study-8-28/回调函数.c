#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int calc(int (*p)(int x, int y))//calc的参数是一个函数地址
//{
//	int a = 0, b = 0,ret=0;
//	printf("请输入两个数字：\n");
//	scanf("%d%d", &a, &b);
//	ret = p(a, b);
//	printf("%d", ret);
//}
//
//int main()
//{
//	calc(Add);//函数名就是函数的地址
//	return 0;
//}

//qsort快排
 //void qsort(void *base,     //待排序数据的起始地址
 //           size_t num,     //待排序数据的元素个数
 //           size_t size,    //待排序数据的元素大小（单位是字节）
 //           int (*compar)(const void *, const void*)//比较2个元素大小的函数指针
 //           );

//int main()
//{
//	char ch = 'w';
//	int i = 20;
//	void* p = &i;//void* 无具体类型的指针
//	//p = &200;//这样写错误
//	*(int*)p = 200;//必须要这样子写，因为不知道p到底是上面类型指针，要强制类型转换
//	//p++;也不可以++，同上，不知道是什么类型的，所以++不知道后移多少
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
	char name[20];
	int age;
};

int str_cmp_by_num(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//这里由于是整数，相减返回是>0,=0,<0，符合qsort对这里的定义，所以ok
}


int str_cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
	//strcmp返回值正好和快排这个函数要求返回值一样，-1，0，1，所以这里可以直接返回strcmp的结果
}


void swap(char* buf1, char* buf2, int width)
{
	for (int i = 0;i < width;i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

//尝试用冒泡排序实现类似qsort功能，可以对不同数据类型排序
void Bubble_sort(void *base,int size,int width,int (*cmp)(const void* e1,const void* e2))
{
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size - i - 1;j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 2,5,25,67,2,567,2,14,5,67 };
	int sz0 = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz0, sizeof(arr[0]), str_cmp_by_num);

	struct stu  a[4] = { {"zhangsan",38},{"lisi",20},{"wangwu",18},{"niuer",16}};
	int sz = sizeof(a) / sizeof(a[0]);
	Bubble_sort(a,sz,sizeof(a[0]), str_cmp_by_name);

	return 0;
}
void qsort(
	void* base,
	size_t nmemb,
	size_t size,
	int (*compar)(const void*, const void*)
);