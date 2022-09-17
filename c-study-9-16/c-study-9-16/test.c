#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//while (~scanf("%d", a));
//	//{
//	//	//这里~的意思是：
//	//	//scanf读取失败的时候返回EOF，就是-1
//	//	//-1补码是全1
//	//	//按位取反之后是0，0代表假，所以跳出循环
//	//}
//
//	//注意：strcpy为什么返回值是char*，因为是为了实现链式访问
//	return 0;
//}

#include<stdio.h>


struct
{
	char name[20];
	int age;
}x1,x2;
//匿名结构体，只能在这里定义变量，下面就不可以定义了

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
//	//ps=&x1;//这样子编译器是无法通过，虽然两个结构体里面的变量一样，但是是两个类型，这样子就是非法操作
//
//	struct people a = { .a = 10,.b = 6.6,.c = 'a' };//这也是一种初始化方式
//	printf("%d %.2lf %c\n", a.a, a.b, a.c);
//
//	struct people b = { 10,6.6,'a' }; //对比得知两个是一样的
//	printf("%d %.2lf %c", b.a, b.b, b.c);
//	return 0;
//}



//结构体内存对齐（计算结构体大小）
//注意两点：(相对于起始位置偏移量)
//1、结构体的第一个成员直接对齐到 相对于结构体变量起始位置 偏移量为0的地址处
//2、从第二个成员开始，每个成员要对齐到【对齐数】的整数倍处
//【对齐数】结构体成员自身大小和默认对齐数的最小值
//VS情况下默认对齐数：8      Linux环境默认不设对齐数（对齐数是结构体成员自身大小）
// 
// 3、如果嵌套结构体，那么嵌套结构体对齐到自己的最大对齐数的整数倍处
//4、结构体的总大小必须是最大对齐数的整数倍

//占用空间小的结构体成员尽量放在一起，这样能很好的节约结构体空间
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
	struct S1 a;//这里对齐到是4的倍数，不是8的倍数
	int i;
};

//设置默认对其数
#pragma pack(1)

struct test
{
	char a;
	int b;
	char c;
};

//恢复默认对其数
#pragma pack()

struct A
{
	short a;    //对齐数为2
	int b;      //对齐数为4
	char c;     //对齐数为1
};

struct B
{
	int a;      //对齐数为4
	char b;     //对齐数为1
	struct A c; //对齐数为4
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
//	printf("第一个的偏移情况：\n");
//	printf("%d\n", offsetof(struct book1,a));  //offsetof是计算一个结构成员相对于结构开头的字节偏移量
//	printf("%d\n", offsetof(struct book1, b));
//	printf("%d\n", offsetof(struct book1, c));
//	printf("第二个的偏移情况：\n");
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

#pragma pack(1)//设置默认对齐数，pack()括号内的值就是修改后的默认对齐数的值
struct test1
{
	char a;
	struct test2 b;
	int c;
};
#pragma pack()//恢复默认对齐数


int main()
{
	printf("第一个的偏移情况：\n");
	printf("%d\n", offsetof(struct test1, a));
	printf("%d\n", offsetof(struct test1, b));
	printf("%d\n", offsetof(struct test1, c));
	printf("第二个的偏移情况：\n");
	printf("%d\n", offsetof(struct test2, a));
	printf("%d\n", offsetof(struct test2, b));
	printf("%d\n", offsetof(struct test2, c));
	return 0;
}