#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	char arr[] = "abcdef@usingarr.jiua";
//	const char* p = "@.";//�ָ��
//
//	//strtok,�ڶ�������Ϊ�ָ�����ҵ��ָ�����Ұѷָ���ĳ�\0
//	//printf("%s\n",strtok(arr, p));
//	//
//	//printf("%s\n", strtok(NULL, p));//�ڶ���������ҵ���ָ��������һ����������NULL
//
//	//printf("%s\n", strtok(NULL, p));
//	
//	//�Ϻõ�д��
//	char* str = NULL;
//	for (str = strtok(arr, p);str != NULL;str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


//int main()
//{
//	//strerror() �Ѵ�����ת���ɴ�����Ϣ
//	//for (int i=0;i<10;i++)
//	//    printf("%s\n", strerror(i));
//
//	FILE* p = fopen("text.c", "r");
//	if (p == NULL)
//	{
//		perror("fopen");//perrot�൱���ȴ�ӡ����������ݣ�Ȼ����ϣ� ���ٴ�ӡ��������ԭ�򣬺�printf+strerror(errno)����
//	}
//	return 0;
//}

//int main()
//{
//	char a = '3';
//	int ret = isdigit(a);//�������ַ�������0
//	printf("%d\n", ret);
//
//	char ch = 'A';
//	printf("%c\n", tolower(ch));//��д��Сд������ch������
//	//printf("%c\n", ch);
//
//	char ch1 = 'a';
//	printf("%c", toupper(ch1));//Сд����д
//	return 0;
//}


//memcpy-�ڴ濽��(ֻ��Ҫʵ�ֲ��ص��Ŀ������У�����VS�⺯�������Ǵﵽ���ص���Ҳ���Կ��������ǲ������б��������涼����)
//memove-���ص����ڴ濽��
//������\0������ͣ����
//void* my_memove(void* dest,const void* src,const int size)
//{
//	assert(dest);
//	assert(src);
//	char* dest1 = (char*)dest;
//	char* src1 = (char*)src;
//	if (dest < src)//��ǰ��󿽱�    
//	{
//		for (int i = 0;i < size;i++)
//		{
//			*dest1++ = *src1++;
//		}
//	}
//	else //�Ӻ���ǰ����
//	{
//		for (int i = size - 1;i >= 0;i--)
//		{
//			*(dest1 + i) = *(src1 + i);
//		}
//	}
//
//	return dest;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 20);//���������ֱ���Ŀ���ַ��Դ��ַ��������С����λ�ֽڣ�
//
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memove(arr1+2, arr1, 20);//�����û�дﵽ�����������ΪҪ��12345������34567���棬Ҫ�Ӻ���ǰ��������54321
//	//��ʱ��Ҫ��ǰ���󿽱�����ʱ��Ҫ�Ӻ���ǰ��������������������
//
//	return 0;
//}

//memcmp-�Ƚϵ�һ�������͵ڶ�������ָ�����ݵĵ�����������С������
//��strncmp�Ƚ����ƣ�����ֻ����memcmp���ԱȽϲ�ͬ�������͵�����
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = {1,2,3,0,0};
//	int ret=memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//memset-
int main()
{
	int arr[] = { 1,2,3,4,5 };
	memset(arr, 0, 9);//��9���ֽڵ����ݸĳ�0�������ֽ�Ϊ��λ������Ԫ�أ�һ��ע��
	for (int i = 0;i < 5;i++)
		printf("%d ", arr[i]);
}