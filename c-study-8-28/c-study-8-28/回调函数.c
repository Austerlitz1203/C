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
//int calc(int (*p)(int x, int y))//calc�Ĳ�����һ��������ַ
//{
//	int a = 0, b = 0,ret=0;
//	printf("�������������֣�\n");
//	scanf("%d%d", &a, &b);
//	ret = p(a, b);
//	printf("%d", ret);
//}
//
//int main()
//{
//	calc(Add);//���������Ǻ����ĵ�ַ
//	return 0;
//}

//qsort����
 //void qsort(void *base,     //���������ݵ���ʼ��ַ
 //           size_t num,     //���������ݵ�Ԫ�ظ���
 //           size_t size,    //���������ݵ�Ԫ�ش�С����λ���ֽڣ�
 //           int (*compar)(const void *, const void*)//�Ƚ�2��Ԫ�ش�С�ĺ���ָ��
 //           );

//int main()
//{
//	char ch = 'w';
//	int i = 20;
//	void* p = &i;//void* �޾������͵�ָ��
//	//p = &200;//����д����
//	*(int*)p = 200;//����Ҫ������д����Ϊ��֪��p��������������ָ�룬Ҫǿ������ת��
//	//p++;Ҳ������++��ͬ�ϣ���֪����ʲô���͵ģ�����++��֪�����ƶ���
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
	return *(int*)e1 - *(int*)e2;//�������������������������>0,=0,<0������qsort������Ķ��壬����ok
}


int str_cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
	//strcmp����ֵ���úͿ����������Ҫ�󷵻�ֵһ����-1��0��1�������������ֱ�ӷ���strcmp�Ľ��
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

//������ð������ʵ������qsort���ܣ����ԶԲ�ͬ������������
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