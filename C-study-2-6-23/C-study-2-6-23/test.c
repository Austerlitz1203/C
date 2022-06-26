#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 10
//字面常量
// 1.字面常量
//30  整型字面常量
//30.2  浮点型字面常量
// “abcaklsd”字符型字面常量
// 2.const修饰的常变量
// 
// 3.define定义的标识符常量
// 
// 4.枚举常量
// 枚举就是一一列举
// 比如  性别、三原色、等等
// enum是枚举的关键字
//

//int main()
//{
//	const int num = 100;//变量增加了一层束缚，成了常属性，不能被修改
//	num = 200;
//	printf("%d", num);
//	return 0;
//	//这样会报错，因为const修饰了num，下一行改了，但是num不能被改变
//
//	//如何证明num依然是一个变量
//	int arr[n] = { 0 };
//	//先无const，说[]里面应该输入常量表达式
//	//加上const，依然说说[]里面应该输入常量表达式，所以const修饰的num不是一个常量而是变量
//}
enum Sex
{
	male,//0
    female,//1
    secret=5//2，这些是初始值，但是可以自己改变,但是只能在定义的时候改变
//枚举类型中所有列出的取值都是枚举常量
};

int main()
{
	//int a = N;
	////printf("%d", a);

	//enum Sex s1 = secret;
	//enum Sex s2 = male;
	////male = 4;  //这里改变值是错误的
	//printf("%d  %d  %d", male, female, secret);

	char a1[] = "abcdef";
	char a2[] = { 'a','b','c','d','e','f','\0'};
	char a3[] = { 'a','b','c','d','e','f' };
	printf("%s%d\n", a1,strlen(a1));
	printf("%s%d\n", a2,strlen(a2));//'\0'只是一个结束标志，strlen统计的是\0之前的字符串长度
	printf("%d\n", strlen(a3));
	printf("abc\0def");//结果是3，遇到\0，统计前面的abc长度，3
	printf("\nY\b=");
	printf("\n%c", '\130');//表示打印八进制的130转换成十进制之后的数字对应的ascll码,\后面是1-3个数字
	printf("\n%c", '\x23');//表示打印十六进制的x23……,x后面是1-2个数字
	printf("\n%d", strlen("c:\tabc\628\test.c"));


}