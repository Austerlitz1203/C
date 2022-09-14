#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	//定义一个函数指针，指向有两个int形参的函数并返回一个函数指针，返回的指针指向一个有一个int参数并且返回int的函数
//	//函数指针 ,指向有两个int形参的函数： (*p)(int ,int )
//	// 返回的指针指向一个有int参数的函数：  (*)(int)   ,且返回int ：   int (*)(int)
//	//所以：   int (*(*p)(int ,int ))(int)
//	//在分析函数指针的时候，先看参数是什么，再看返回类型是什么
//	//分析其他指针：指向什么，指向的数据是什么类型
//
//	//设计一个指针数组，该数组指向每个元素指向一个函数，该函数参数是int*，返回int*
//	// p[10]  数组     指向的数据类型：  int*  (*)(int *)    
//	//合起来：  int* (*p[10])(int*)
//
//	return 0;
//}


void turn_left1(char* dest, int x)//一个一个移动
{
	assert(dest);
	int len = strlen(dest);
	for (int i = 0;i < x;i++) //实行x次
	{
		char temp = dest[0];//每次一开始把第一个字符存起来
		for (int j = 1;j < len;j++)//第二个开始，每个字符往前移1
		{
			dest[j - 1] = dest[j];
		}
		dest[len - 1] = temp;//最后一个换成原来的首字母
	}
	return;
}

void  turn_left2(char* left,  char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	return;
}



int is_turn_left(char* dest, char* src)
{
	assert(dest && src);
	int len1 = strlen(dest);
	int len2 = strlen(src);
	if (len1 != len2)
		return 0;
	for (int i = 0;i < len1;i++)
	{
		int temp = dest[0];
		for (int j = 1;j < len1;j++)
			dest[j - 1] = dest[j];
		dest[len1 - 1] = temp;
		
		if (strcmp(dest, src) == 0)
			return 1;
	}
	return 0;
}

//递归实现左旋
void  turn_left(char* p)
{
	int len = strlen(p);
	char temp = p[0];
	p[0] = p[len - 1];
	p[len - 1] = '\0';
	if (strlen(p+1) >= 2)
	{
		turn_left(p+1);
	}
	p[len - 1] = temp;
	return;
}

int main()
{
	char arr1[20] = "ABCDEF";
	char arr2[] = "CDEFAB";
	int len = strlen(arr1);

	//左旋arr1前x个字符
	//turn_left1(arr1, 2);
	//printf("%s\n", arr1);

	//设计双指针来旋转
	//turn_left2(arr1, arr1 + len - 1);
	//printf("%s\n", arr1);

	//递归左旋
	//turn_left(arr1);
	//printf("%s\n", arr1);



	//判断arr2字符串是不是arr1字符串左旋产生的
	
	//法1，一个一个左旋然后判断
	//int flag=is_turn_left(arr1, arr2);
	
	//法2，巧妙解法
	int flag = 1;
	strncat(arr1, arr1, len); //在本省后面追加一个本省的字符串   ABCDEFFEDCBA  这里面包含了所有可能左旋的结果
	if (strstr(arr1, arr2)==NULL)//然后在追加之后的字符串里寻找arr2
		flag = 0;
	
	if (flag == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

//递归实现左旋
//void  turn_left(char* p)
//{
//	int len = strlen(p);
//	char temp = p[0];
//	p[0] = p[len - 1];
//	p[len - 1] = '\0';
//	if (strlen(p)>=2)
//	{
//		p++;
//		turn_left(p);
//	}
//	p[len - 1] = temp;
//	return;
//}