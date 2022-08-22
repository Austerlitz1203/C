#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	for (int i = 0;i < 10;i++)
//		arr[i] = 0;
//	for (int i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	//这里会死循环打印hehe，肉眼无法看出，通过调试才能看出
//	//调试到i=12的时候，发现a[12]初始值也是12，然后a[12]变为0的同时，i也变为0，猜测两个为同一地址
//	//取地址两个，确实同一地址
//	//改成Release版本不会死循环，因为Release版本会优化,同样取地址i和arr，发现i比arr低了，这是优化后的
//
//	//why这样，因为栈区一般是高地址先使用，低地址后使用
//	//for example
//	int a = 0;
//	int b = 0;
//	//监视a，b地址，a的地址比b高
//	return 0;
//}


//优秀的代码之，会用assert();
//自编strcpy函数
#include<assert.h>
//assert();是指，括号里内容为假的时候，会报错

char*  my_strcpy(char* dest,  const char* src)//参考下方，这里加上const，如果下面交换反了，会直接报错，保护原数据被改
{
	//assert(dest != NULL);//断言，=NULL时报错
	//assert(src != NULL);//断言

	//assert(dest);
	//assert(src);//这样也可以，当其为NULL的时候就是空
	char* p = dest;
	assert(dest && src);//这样也可以
	while (*dest++ = *src++)//好处，值为'\0'的时候，一方面赋给左边，另一方面，\0代表返回的是0，这样循环结束
	{
		;
	}
	return p;//strcpy返回的是目标空间的起始地址
}


int my_strlen(const char* arr)//只是计算长度，并不改变内容，arr要++（改变），所以const在*左边
{
	assert(arr);//涉及到对指针的解引用就最好写一个assert();
	int count = 0;
	while (*arr)//解引用了
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "abcde";
	char* p = NULL;
	my_strcpy(arr1, p);
	printf("%s", arr1);
	return 0;
}




//const

//int main()
//{
//	const int a = 10;
//	int* p = &a;
//	//a = 20;
//	*p = 20;
//	//这种情况下，直接修改a不可以，因为a被const修饰，但是通过设计指针，*p可以修改a
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	const int* p = &a;
//	//*p = 20;  //const放在*左边， 表示修饰的是指针指向的内容，即值，所以*p不可以修改，但是p（地址）可以修改
//	int b = 30;
//	p = &b;
//	printf("%d", *p);
//
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int*  const p = &a;
//	*p = 20;
//	int b = 30;
//	//p = &b; //const放在*的右边，修饰的是指针，即地址，所以指针指向的内容可以改，指针不能改
//	printf("%d",*p);
//	return 0;
//}