#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <vcruntime.h>

//对NULL的指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	//*p = 5;//这样子写可能错误，不规范,运行就会报错，因为malloc失败则返回空指针，然后p接收到的就是NULL
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//	*p = 5;
//	//应该这样子写
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//对动态内存的越界访问
//int main()
//{
//	int* p = (int*)malloc(20);//开辟了20个字节
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//	for (int i = 0;i < 20;i++)
//		p[i] = i;
//	//越界访问了,程序会崩溃
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//对非动态内存的释放
//int main()
//{
//	int a = 20;
//	int* p = &a;
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//
//	free(p);//对非动态内存的释放
//	p = NULL;
//	return 0;
//}


//使用free释放一块动态内存的一部分，错误的
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//    
//	for (int i = 0;i < 5;i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	free(p);//这时候是错误的，因为p以经不指向最初开辟的起始位置了
//	p = NULL;
//}

//申请了忘记释放就会导致内存泄漏



//返回栈空间地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//p是一个局部数组，这里的"hello world"不是在静态区的，这是栈区的。
//	return p;//函数运行结束的时候，p被销毁，意思是这块空间被还给操作系统了，对这块空间没有使用权限了
//}            //对这块空间没有使用权限，即可能更改可能不更改，所以又可能打印出来hello world
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//这里是正确的
//int test()
//{
//	int a = 10;
//	return a;//这里是正确的，返回的不是地址，而是一个变量，这个变量的值在被销毁前，被存在了寄存器里面，寄存器赋给了ret
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d ", ret);
//	return 0;
//}

//错误的
//int* test()
//{
//	int a = 10;
//	return &a;//这里知识恰好没被改
//}
//
//int main()
//{
//	int *ret = test();
//	printf("%d ", *ret);
//	return 0;
//}


//错误放大
int* test()
{
	int a = 10;
	return &a;//这里知识恰好没被改
}

int main()
{
	int* ret = test();
	printf("hehe\n"); //函数栈帧的创建和销毁知识，test函数的栈帧销毁了，然后printf的栈帧又创建，所以a的地址的内容被改了
	printf("%d ", *ret);
	return 0;
}