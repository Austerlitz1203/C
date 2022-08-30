#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char  name[20];
	int age;
}stu;


int cmp_by_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_by_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}

int cmp_by_double(const void* e1, const void* e2)
{
	return *(double*)e1 - *(double*)e2;
}

int cmp_by_char(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);//strcmp()里面是填写地址
}

int cmp_by_struct_int(const void* e1, const void* e2)
{
	return ((stu*)e1)->age - ((stu*)e2)->age;
}

int cmp_by_struct_char(const void* e1, const void* e2)
{
	return strcmp(((stu*)e1)->name,((stu*)e2)->name);
}

int main()
{
	int a[10] = { 3,5,22,456,74,39,6,66,89,1 };
	int sz1 = sizeof(a) / sizeof(a[0]);
	qsort(a,sz1,sizeof(a[0]),cmp_by_int);

	float b[10] = { 3.56,5.23,3.57,456.2,74.44,39.67,6.9,66.64,89.33,1.0 };
	int sz2 = sizeof(b) / sizeof(b[0]);
	qsort(b, sz2, sizeof(b[0]), cmp_by_float);

	double c[10] = { 3.56,5.23,3.57,456.2,88.5,39.67,6.9,56.78,89.33,4.99 };
	int sz3 = sizeof(c) / sizeof(c[0]);
	qsort(c, sz3, sizeof(c[0]), cmp_by_double);

	char d[4][10] = { "hello","zhangsan","lisiw","using" };
	int sz4 = sizeof(d) / 10;
	qsort(d, sz4, 10,cmp_by_char);

	stu arr[4] = { {"zhangsan",90},{"lisi",18},{"wangwu",66},{"wulie",20}};
	int sz5 = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz5,sizeof(arr[0]),cmp_by_struct_int);


	stu arr1[4] = { {"zhangsan",90},{"lisi",18},{"wangwu",66},{"wulie",20} };
	int sz6 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz6, sizeof(arr1[0]), cmp_by_struct_char);

	return 0;
}