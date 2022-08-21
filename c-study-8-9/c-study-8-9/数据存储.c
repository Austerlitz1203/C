#define _CRT_SECURE_NO_WARNINGS 1
//数据类型：整形、浮点型
//整形大家族：char，short，int，long
//
//void使用：
//1，函数返回值类型，表示无返回值
//2，函数参数，表示绝对无参数
//3，指针类型，可以表示任何类型的指针，但是使用会有错误




//数据存储分为大端存储和小端存储
//大端存储：一个数值低位字节的数据存储在的高地址中，高位字节的数据存储在内存的低地址中
//小端存储：一个数值低位字节的数据存储在的低地址中，高位字节的数据存储在内存的高地址中
//vs环境下是小端存储方式
//比如：11111111111111111111111111111010
//以字节来看是 ff  ff  ff   f6
//然后内存里存储是f6 ff ff ff  这四个字节，对应的是32个比特位（一个字节是8个比特位）
//但是存储上不看字节内部顺序，所以不是6f ff ff ff

#include<stdio.h>
#include<string.h>
int check_sys()//函数实现
{
	int a = 1;
	return *(char*)&a;
	//这个返回1就是小端，返回0就是大端存储
}

//判断当前编译器是小端存储还是大端存储
int main()
{
	int a0[10] = {0};          //小端存储 01 00 00 00   大端存储 00 00 00 01
  	char* p = (char*)&a0;//int类型+1是跳过四个字节，而char类型是一个字节，所以转换，取低地址的第一个字节，小端就是01，大端00
	if (*p == 1)
		printf("小端\n");
	else
		printf("大端\n");

	//char a1 = -128;
	//printf("%u\n", a1);
	// 
	// 
	//-128的
	//10000000000000000000000001000000
	//11111111111111111111111110111111
	//11111111111111111111111111000000  补码
	//截断后  10000000  -a
	//整型提升后11111111111111111111111110000000，并且是无符号的
    

	//int a, b, c, d, e;
	//for (int a = 1;a < 6;a++)
	//{
	//	for (int b = 1;b < 6;b++)
	//	{
	//		for (int c = 1;c < 6;c++)
	//		{
	//			for (int d = 1;d < 6;d++)
	//			{
	//				for (int e = 1;e < 6;e++)
	//				{
	//					
	//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
	//						{
	//							printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", a, b, c, d, e);	
	//						}
	//				}
	//			}
	//		}
	//	}
	//}


	//for (int a = 0;a < 2;a++)//0表示是，1表示不是
	//{
	//	for (int b = 0;b < 2;b++)
	//	{
	//		for (int c = 0;c < 2;c++)
	//		{
	//			for (int d = 0;d < 2;d++)
	//			{
	//				if (((a == 1) + (c == 0) + (d == 0) + (d == 1)) == 3)//三个人说的真话
	//				{
	//					//printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
	//					if (a+b+c+d==3)//只有一个凶手
	//					{
	//						if (a == 0) printf("是A！");
	//						if (b == 0) printf("是B！");
	//						if (c == 0) printf("是C！");
	//						if (d == 0) printf("是D！");
	//					}
	//				}
	//			}
	//		}
	//	}
	//}

	printf("请输入想打印杨辉三角的行数(30行以内)：");
	int n,a[31][31];
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		a[i][1] = 1;
		a[i][i] = 1;
	}
	for (int i = 3;i <= n;i++)
	{
		for (int j = 2;j < i;j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
			printf("%-6d", a[i][j]);
		printf("\n");
	}

	return 0;
}

//有符号数，整形提升，是按照符号数提升
//无符号数，整形提升，是按照全部补0
//比如，char  a=-1;    
//10000000000000000000000000000001 原码
//11111111111111111111111111111110 反码
//11111111111111111111111111111111 补码
//存储是按照补码来存储，但是char类型只有一个字节，占八个比特位，所以存储的是低位的11111111
//11111111
// printf("%d",a);  这里a是char类型，但是却用%d打印，所以压迫整形的、提升
//它是有符号的类型，（char 默认是signed char），所以按照符号位来提升，11111111符号位是1
// 1  …………  1111111    中间……是提升的，左边1是符号位，右边七个1
//所以提升后为111111111111111111111111  这是补码，转换成原码是代表-1，所以打印出来是-1

//而 unsigned char b=-1；
//对于int b1=-1; 
//00000000000000000000000000000001 原码
//01111111111111111111111111111110 反码
//01111111111111111111111111111111 补码
//所以b存储时候是按照11111111来存储，但是由于它是无符号为，所以补0提升
//00000000000000000000000011111111，这是正数，整数原码反码补码一样，所以这个也是原码，二进制八个1是255


//00000000000000000000000011001000
//01111111111111111111111100110111
//01111111111111111111111100111000
//
//00111000
//00000000000000000000000000111000
//
//
//00000000000000000000000001100100
//01111111111111111111111110011011
//01111111111111111111111110011100
//
//10011100
//00000000000000000000000010011100
//00000000000000000000000000111000
//00000000000000000000000011010100
//01111111111111111111111100101011
//01111111111111111111111100101100
// 00101100  ->44
