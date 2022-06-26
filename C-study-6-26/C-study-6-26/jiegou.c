#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//c语言是结构化的程序设计语言
//顺序
//选择 if    switch
//循环  while     for    do while
int main()
{
	//int input = 0;
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("LEO");
	//else 
	//    return 0;
	int i = 0;
	while (i < 200)
	{
		i++;
		printf("world:%d\n", i);
	}
	if (i == 200)
		printf("Sucess");
	return 0;


	char a[3] = { 0 };//其实里面放的是3个\0，因为0的ascll码是\0，存储的ascll码
}