#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <vcruntime.h>

//��NULL��ָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	//*p = 5;//������д���ܴ��󣬲��淶,���оͻᱨ����Ϊmallocʧ���򷵻ؿ�ָ�룬Ȼ��p���յ��ľ���NULL
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//	*p = 5;
//	//Ӧ��������д
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//�Զ�̬�ڴ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(20);//������20���ֽ�
//	if (p == NULL)
//	{
//		exit(-1);
//		return;
//	}
//	for (int i = 0;i < 20;i++)
//		p[i] = i;
//	//Խ�������,��������
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//�ԷǶ�̬�ڴ���ͷ�
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
//	free(p);//�ԷǶ�̬�ڴ���ͷ�
//	p = NULL;
//	return 0;
//}


//ʹ��free�ͷ�һ�鶯̬�ڴ��һ���֣������
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
//	free(p);//��ʱ���Ǵ���ģ���Ϊp�Ծ���ָ��������ٵ���ʼλ����
//	p = NULL;
//}

//�����������ͷžͻᵼ���ڴ�й©



//����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//p��һ���ֲ����飬�����"hello world"�����ھ�̬���ģ�����ջ���ġ�
//	return p;//�������н�����ʱ��p�����٣���˼�����ռ䱻��������ϵͳ�ˣ������ռ�û��ʹ��Ȩ����
//}            //�����ռ�û��ʹ��Ȩ�ޣ������ܸ��Ŀ��ܲ����ģ������ֿ��ܴ�ӡ����hello world
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

//��������ȷ��
//int test()
//{
//	int a = 10;
//	return a;//��������ȷ�ģ����صĲ��ǵ�ַ������һ�����������������ֵ�ڱ�����ǰ���������˼Ĵ������棬�Ĵ���������ret
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d ", ret);
//	return 0;
//}

//�����
//int* test()
//{
//	int a = 10;
//	return &a;//����֪ʶǡ��û����
//}
//
//int main()
//{
//	int *ret = test();
//	printf("%d ", *ret);
//	return 0;
//}


//����Ŵ�
int* test()
{
	int a = 10;
	return &a;//����֪ʶǡ��û����
}

int main()
{
	int* ret = test();
	printf("hehe\n"); //����ջ֡�Ĵ���������֪ʶ��test������ջ֡�����ˣ�Ȼ��printf��ջ֡�ִ���������a�ĵ�ַ�����ݱ�����
	printf("%d ", *ret);
	return 0;
}