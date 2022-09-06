#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{

	////"abcdef"; //作为一个表达式，它的值是首元素地址
	//char* ps = "abcdef";//意思是把这个字符串的首地址放到ps里面
	//printf("%s\n", ps);
	//int arr[3] = { 1,2,3 };
	//int* p = arr;
	//int(*pa)[3] = &arr;
	//printf("%d\n", *(*pa+1));//pa 是整个数组的地址，*pa是数组首元素地址
	//
	//printf("%u %u\n", p, pa);
	//printf("%u  %u\n", p+1, pa+1);//这里可以看出,虽然arr和&arr的值一样，但是它们类型不一样，一个是int*类型的
	//                              //指针，一个是 int(*)[3]类型的指针
	//
	//printf("%d\n", sizeof(*&arr));//&a是一个数组的地址，是数组指针类型，*&a是对数组指针进行解引用，访问的是一个数组的大小
	////也可以看作*&抵消，成了sizeof(arr),arr在sizeof里面代表的是整个数组的地址
	//printf("%d\n", sizeof(&*arr));//这个和上面就不一样了，*a表示首元素，再&就是首元素取地址，所以是4/8
	//printf("%d", sizeof(pa));//pa只不过是一个地址，虽然指向数组，但是它依然是一个指针，大小还是4/8


	////arr 数组名是数组首元素地址
	//int* pb = arr;
	//printf("%d", *pb);


	//int (*arr[5])(int x, int y);//函数指针数组
	//&arr;//需要一个指向函数指针数组的指针变量来存
	//int (*(*pa)[5])(int x, int y)=&arr;
	//用前面的思想来，都是一样的，一个指针，指向数组那么(*pa)[5]就出来了
	//数组里面的元素类型是函数指针 ，所以返回值为 int(* )(int x,int y);所以写出来了




	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));//并非是arr单独放在sizeof内，所以arr表示首元素地址，+0后依然是首元素地址
	//printf("%d\n", sizeof(&arr));//这里的&arr明显是一整个数组的地址，sizeof是取其地址，是地址，就是4/8
	//printf("%d\n", sizeof(&arr + 1));//但是如果用一个指针变量p指向arr，strlen(p)就是随机值，因为p存的是arr地址
	                                   //但是&p是p的地址，p后面是什么谁也不知道

	//printf("%d\n", strlen(arr));//结果是随机值，因为只知道有六个字节放的是abcdef，并不知道abcdef前面和后面是什么
	//                          //而此时此刻arr是首元素即a的地址，而strlen是计算到'\0'（AScll码是0）结束，但是后面并不
	//                          //知道0或者\0在哪里，所以是随机值

	//printf("%d\n", strlen(*arr));//这里错误，因为strlen里面应该是地址，但是这里*arr是首元素a，所以实际上当成了
	//                             //a的ascll码值97（字符本质上是ascll码值），所以访问的是97地址，非法访问内存。
	//printf("%d\n", strlen(&arr));//随机值，&arr是数组的地址，数组的地址也是指向数组的首元素，和第一个案例一样
	//printf("%d\n", strlen(&arr[0]) + 1);//也是随机值



	const char* p = "abcdef";
	//printf("%zu\n", sizeof(p));
	//printf("%zu\n", sizeof(p+1));
	//printf("%zu\n", sizeof(*p));
	//printf("%zu\n", sizeof(p[0]));
	//printf("%zu\n", sizeof(&p));
	//printf("%zu\n", sizeof(&p+1));
	//printf("%zu\n", sizeof(&p[0]+1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p ));//这里p存的是arr地址，但是&p是p的地址，不知道&p后面是什么，所以随机值
	printf("%d\n", strlen(&p + 1));//随机值，和上面一个无关，因为不知道&p和&p+1之间四个字节有没有'\0'
	printf("%d\n", strlen(&p[0] + 1));

	printf("%u   %u", p, &p);
}