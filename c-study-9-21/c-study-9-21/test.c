#define _CRT_SECURE_NO_WARNINGS 1

//枚举
//#include<stdio.h>
//
//enum Day
//{
//	Mon,//结构体里这些叫成员变量，这里叫枚举的可能取值/枚举常量，既是常量，就不可以修改，像下面想改Thu是错误的
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
//	//enum Day a = 4;//在c语言中可以，但是c++会报错
//	//printf("%d\n", a);
//
//	enum Day day=Fri;//枚举变量的取值是上面定义的几个之内，固定的
//	printf("%d\n", Mon);
//	printf("%d\n", Tue);
//	printf("%d\n", Thu);//结果是0，1，2，
//	//Thu = 4;错的，因为不可修改
//	printf("%d\n", Wen);
//	printf("%d\n", Sat);//这里，在上面赋一个值，那么其枚举常量对应的值是赋的，然后下面对应的是上一个+1
//	printf("%d\n", Sun);
//
//	printf("%d\n", sizeof(enum Day));//结果是4（不是每个编译器都这样），在这里是因为，起始它每次表示的是一个可能，不是所有可能
//	
//	
//	return 0;
//}


//联合/公用体
#include<stdio.h>

//所有成员共用一个内存
union un
{
	char a;
	int b;
	double c;
};

//在判断机器大小端方面的应用
union  
{
	char a;
	int b;
}u;
int main()
{
	//union un a;//只用其中一个的时候，不用其他的成员，联合体的成员不会同时用
	//printf("%p\n", &a);
	//printf("%p\n", a.a);
	//printf("%p\n", a.b);
	//printf("%p\n", a.c);//三个地址一样

	//printf("%d\n", sizeof(union un));
	//printf("%d\n", sizeof(a));

	u.b = 1;
	if (u.a == 0)
		printf("大端！\n");
	else
		printf("小端！\n");
	return 0;
}