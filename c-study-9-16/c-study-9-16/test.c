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

#include<stddef.h>
int main()
{   
	printf("%d\n", offsetof(struct S1,c1));  //offsetof�ǱȽϵڶ�����������ڵ�һ��Ԫ�ص�ƫ����
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, c2));

	printf("%d\n",sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct test));
	return 0;
}

