#define _CRT_SECURE_NO_WARNINGS 1

//ö��
//#include<stdio.h>
//
//enum Day
//{
//	Mon,//�ṹ������Щ�г�Ա�����������ö�ٵĿ���ȡֵ/ö�ٳ��������ǳ������Ͳ������޸ģ����������Thu�Ǵ����
//	Tue,
//	Thu,
//	Fri,
//	Wen,
//	Sat=10,
//	Sun
//};
//
//int main()
//{
//	//enum Day a = 4;//��c�����п��ԣ�����c++�ᱨ��
//	//printf("%d\n", a);
//
//	enum Day day=Fri;//ö�ٱ�����ȡֵ�����涨��ļ���֮�ڣ��̶���
//	printf("%d\n", Mon);
//	printf("%d\n", Tue);
//	printf("%d\n", Thu);//�����0��1��2��
//	//Thu = 4;��ģ���Ϊ�����޸�
//	printf("%d\n", Wen);
//	printf("%d\n", Sat);//��������渳һ��ֵ����ô��ö�ٳ�����Ӧ��ֵ�Ǹ��ģ�Ȼ�������Ӧ������һ��+1
//	printf("%d\n", Sun);
//
//	printf("%d\n", sizeof(enum Day));//�����4������ÿ����������������������������Ϊ����ʼ��ÿ�α�ʾ����һ�����ܣ��������п���
//	
//	
//	return 0;
//}


//����/������
#include<stdio.h>

//���г�Ա����һ���ڴ�
union un
{
	char a;
	int b;
	double c;
};

//���жϻ�����С�˷����Ӧ��
union  
{
	char a;
	int b;
}u;
int main()
{
	//union un a;//ֻ������һ����ʱ�򣬲��������ĳ�Ա��������ĳ�Ա����ͬʱ��
	//printf("%p\n", &a);
	//printf("%p\n", a.a);
	//printf("%p\n", a.b);
	//printf("%p\n", a.c);//������ַһ��

	//printf("%d\n", sizeof(union un));
	//printf("%d\n", sizeof(a));

	u.b = 1;
	if (u.a == 0)
		printf("��ˣ�\n");
	else
		printf("С�ˣ�\n");
	return 0;
}