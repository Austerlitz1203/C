#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//while (~scanf("%d", a));
//	//{
//	//	//����~����˼�ǣ�
//	//	//scanf��ȡʧ�ܵ�ʱ�򷵻�EOF������-1
//	//	//-1������ȫ1
//	//	//��λȡ��֮����0��0����٣���������ѭ��
//	//}
//
//	//ע�⣺strcpyΪʲô����ֵ��char*����Ϊ��Ϊ��ʵ����ʽ����
//	return 0;
//}

#include<stdio.h>


struct
{
	char name[20];
	int age;
}x1,x2;
//�����ṹ�壬ֻ�������ﶨ�����������Ͳ����Զ�����

struct data
{
	char name[20];
	int age;
}*ps;

struct people
{
	int a;
	float b;
	char c;
};

//int main()
//{
//	//ps=&x1;//�����ӱ��������޷�ͨ������Ȼ�����ṹ������ı���һ�����������������ͣ������Ӿ��ǷǷ�����
//
//	struct people a = { .a = 10,.b = 6.6,.c = 'a' };//��Ҳ��һ�ֳ�ʼ����ʽ
//	printf("%d %.2lf %c\n", a.a, a.b, a.c);
//
//	struct people b = { 10,6.6,'a' }; //�Աȵ�֪������һ����
//	printf("%d %.2lf %c", b.a, b.b, b.c);
//	return 0;
//}



//�ṹ���ڴ���루����ṹ���С��
//ע�����㣺(�������ʼλ��ƫ����)
//1���ṹ��ĵ�һ����Աֱ�Ӷ��뵽 ����ڽṹ�������ʼλ�� ƫ����Ϊ0�ĵ�ַ��
//2���ӵڶ�����Ա��ʼ��ÿ����ԱҪ���뵽��������������������
//�����������ṹ���Ա�����С��Ĭ�϶���������Сֵ
//VS�����Ĭ�϶�������8      Linux����Ĭ�ϲ�����������������ǽṹ���Ա�����С��
// 
// 3�����Ƕ�׽ṹ�壬��ôǶ�׽ṹ����뵽�Լ���������������������
//4���ṹ����ܴ�С����������������������

//ռ�ÿռ�С�Ľṹ���Ա��������һ�������ܺܺõĽ�Լ�ṹ��ռ�
struct S1
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	struct S1 a;//������뵽��4�ı���������8�ı���
	int i;
};

//����Ĭ�϶�����
#pragma pack(1)

struct test
{
	char a;
	int b;
	char c;
};

//�ָ�Ĭ�϶�����
#pragma pack()

struct A
{
	short a;    //������Ϊ2
	int b;      //������Ϊ4
	char c;     //������Ϊ1
};

struct B
{
	int a;      //������Ϊ4
	char b;     //������Ϊ1
	struct A c; //������Ϊ4
};


struct book1
{
	int a;
	char b;
	int c;
};

struct book2
{
	char a;
	int b;
	int c;
};
#include<stddef.h>
//int main()
//{   
//	printf("��һ����ƫ�������\n");
//	printf("%d\n", offsetof(struct book1,a));  //offsetof�Ǽ���һ���ṹ��Ա����ڽṹ��ͷ���ֽ�ƫ����
//	printf("%d\n", offsetof(struct book1, b));
//	printf("%d\n", offsetof(struct book1, c));
//	printf("�ڶ�����ƫ�������\n");
//	printf("%d\n", offsetof(struct book2, a));  
//	printf("%d\n", offsetof(struct book2, b));
//	printf("%d\n", offsetof(struct book2, c));
//
//	//printf("%d\n",sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	//printf("%d\n", sizeof(struct test));
//
//	//printf("%d\n", sizeof(struct A));
//	//printf("%d\n", sizeof(struct B));
//	return 0;
//}

#include<stdio.h>
#include<stddef.h>
struct test2
{
	char a;
	int b;
	char c;
};

#pragma pack(1)//����Ĭ�϶�������pack()�����ڵ�ֵ�����޸ĺ��Ĭ�϶�������ֵ
struct test1
{
	char a;
	struct test2 b;
	int c;
};
#pragma pack()//�ָ�Ĭ�϶�����


int main()
{
	printf("��һ����ƫ�������\n");
	printf("%d\n", offsetof(struct test1, a));
	printf("%d\n", offsetof(struct test1, b));
	printf("%d\n", offsetof(struct test1, c));
	printf("�ڶ�����ƫ�������\n");
	printf("%d\n", offsetof(struct test2, a));
	printf("%d\n", offsetof(struct test2, b));
	printf("%d\n", offsetof(struct test2, c));
	return 0;
}