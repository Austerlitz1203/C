#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//int main()
//{
//	//����һ������ָ�룬ָ��������int�βεĺ���������һ������ָ�룬���ص�ָ��ָ��һ����һ��int�������ҷ���int�ĺ���
//	//����ָ�� ,ָ��������int�βεĺ����� (*p)(int ,int )
//	// ���ص�ָ��ָ��һ����int�����ĺ�����  (*)(int)   ,�ҷ���int ��   int (*)(int)
//	//���ԣ�   int (*(*p)(int ,int ))(int)
//	//�ڷ�������ָ���ʱ���ȿ�������ʲô���ٿ�����������ʲô
//	//��������ָ�룺ָ��ʲô��ָ���������ʲô����
//
//	//���һ��ָ�����飬������ָ��ÿ��Ԫ��ָ��һ���������ú���������int*������int*
//	// p[10]  ����     ָ����������ͣ�  int*  (*)(int *)    
//	//��������  int* (*p[10])(int*)
//
//	return 0;
//}


void turn_left1(char* dest, int x)//һ��һ���ƶ�
{
	assert(dest);
	int len = strlen(dest);
	for (int i = 0;i < x;i++) //ʵ��x��
	{
		char temp = dest[0];//ÿ��һ��ʼ�ѵ�һ���ַ�������
		for (int j = 1;j < len;j++)//�ڶ�����ʼ��ÿ���ַ���ǰ��1
		{
			dest[j - 1] = dest[j];
		}
		dest[len - 1] = temp;//���һ������ԭ��������ĸ
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

//�ݹ�ʵ������
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

	//����arr1ǰx���ַ�
	//turn_left1(arr1, 2);
	//printf("%s\n", arr1);

	//���˫ָ������ת
	//turn_left2(arr1, arr1 + len - 1);
	//printf("%s\n", arr1);

	//�ݹ�����
	//turn_left(arr1);
	//printf("%s\n", arr1);



	//�ж�arr2�ַ����ǲ���arr1�ַ�������������
	
	//��1��һ��һ������Ȼ���ж�
	//int flag=is_turn_left(arr1, arr2);
	
	//��2������ⷨ
	int flag = 1;
	strncat(arr1, arr1, len); //�ڱ�ʡ����׷��һ����ʡ���ַ���   ABCDEFFEDCBA  ��������������п��������Ľ��
	if (strstr(arr1, arr2)==NULL)//Ȼ����׷��֮����ַ�����Ѱ��arr2
		flag = 0;
	
	if (flag == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

//�ݹ�ʵ������
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