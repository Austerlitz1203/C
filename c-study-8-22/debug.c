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
//	//�������ѭ����ӡhehe�������޷�������ͨ�����Բ��ܿ���
//	//���Ե�i=12��ʱ�򣬷���a[12]��ʼֵҲ��12��Ȼ��a[12]��Ϊ0��ͬʱ��iҲ��Ϊ0���²�����Ϊͬһ��ַ
//	//ȡ��ַ������ȷʵͬһ��ַ
//	//�ĳ�Release�汾������ѭ������ΪRelease�汾���Ż�,ͬ��ȡ��ַi��arr������i��arr���ˣ������Ż����
//
//	//why��������Ϊջ��һ���Ǹߵ�ַ��ʹ�ã��͵�ַ��ʹ��
//	//for example
//	int a = 0;
//	int b = 0;
//	//����a��b��ַ��a�ĵ�ַ��b��
//	return 0;
//}


//����Ĵ���֮������assert();
//�Ա�strcpy����
#include<assert.h>
//assert();��ָ������������Ϊ�ٵ�ʱ�򣬻ᱨ��

char*  my_strcpy(char* dest,  const char* src)//�ο��·����������const��������潻�����ˣ���ֱ�ӱ�������ԭ���ݱ���
{
	//assert(dest != NULL);//���ԣ�=NULLʱ����
	//assert(src != NULL);//����

	//assert(dest);
	//assert(src);//����Ҳ���ԣ�����ΪNULL��ʱ����ǿ�
	char* p = dest;
	assert(dest && src);//����Ҳ����
	while (*dest++ = *src++)//�ô���ֵΪ'\0'��ʱ��һ���渳����ߣ���һ���棬\0�����ص���0������ѭ������
	{
		;
	}
	return p;//strcpy���ص���Ŀ��ռ����ʼ��ַ
}


int my_strlen(const char* arr)//ֻ�Ǽ��㳤�ȣ������ı����ݣ�arrҪ++���ı䣩������const��*���
{
	assert(arr);//�漰����ָ��Ľ����þ����дһ��assert();
	int count = 0;
	while (*arr)//��������
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
//	//��������£�ֱ���޸�a�����ԣ���Ϊa��const���Σ�����ͨ�����ָ�룬*p�����޸�a
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	const int* p = &a;
//	//*p = 20;  //const����*��ߣ� ��ʾ���ε���ָ��ָ������ݣ���ֵ������*p�������޸ģ�����p����ַ�������޸�
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
//	//p = &b; //const����*���ұߣ����ε���ָ�룬����ַ������ָ��ָ������ݿ��Ըģ�ָ�벻�ܸ�
//	printf("%d",*p);
//	return 0;
//}