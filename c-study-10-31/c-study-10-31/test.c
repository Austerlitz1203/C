#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<ctype.h>
//#include<limits.h>
//int my_atoi(char* dst)
//{
//	//�ų������
//	assert(*dst);
//
//	//ȥ���ո�
//	if (*dst == ' ')
//	{
//		dst++;
//	}
//
//	//�ж�����
//	int flag = 0;//Ĭ������
//	if (*dst == '-')
//	{
//		flag = 1;
//		dst++;
//	}
//	if (*dst == '+')
//	{
//		dst++;
//	}
//
//	int ret = 0;
//	while (isdigit(*dst))
//	{
//		ret = ret * 10 + (*dst - '0');
//		if (ret > INT_MAX || ret < INT_MIN)
//			return 0;
//
//		dst++;
//	}
//
//
//	if (flag == 1)
//	{
//		ret *= -1;
//	}
//	return ret;
//}
//
//int main()
//{
//	char* str = "-123456";
//	int ret = my_atoi(str);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include<stdio.h>
//#define offsetof(TYPE, MEMBER) ((size_t)& ((TYPE*)0)->MEMBER)
//
//struct people
//{
//	char a;
//	int b;
//	short c;
//	unsigned char d : 7;
//};
//
//
//int main()
//{
//	int ret = offsetof(struct people, c);
//	printf("%d\n", ret);
//
//	return 0;
//}


#include<stdio.h>
#define EXCHANGE(NUM) ((((NUM) & (0X55555555)) << 1) | (((NUM) & (0XAAAAAAAA)) >> 1))

int main()
{
	int a = 10;
	int b = EXCHANGE(a);
	printf("%d", b);

	return 0;
}