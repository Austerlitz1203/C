#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define N 10
//���泣��
// 1.���泣��
//30  �������泣��
//30.2  ���������泣��
// ��abcaklsd���ַ������泣��
// 2.const���εĳ�����
// 
// 3.define����ı�ʶ������
// 
// 4.ö�ٳ���
// ö�پ���һһ�о�
// ����  �Ա���ԭɫ���ȵ�
// enum��ö�ٵĹؼ���
//

//int main()
//{
//	const int num = 100;//����������һ�����������˳����ԣ����ܱ��޸�
//	num = 200;
//	printf("%d", num);
//	return 0;
//	//�����ᱨ����Ϊconst������num����һ�и��ˣ�����num���ܱ��ı�
//
//	//���֤��num��Ȼ��һ������
//	int arr[n] = { 0 };
//	//����const��˵[]����Ӧ�����볣�����ʽ
//	//����const����Ȼ˵˵[]����Ӧ�����볣�����ʽ������const���ε�num����һ���������Ǳ���
//}
enum Sex
{
	male,//0
    female,//1
    secret=5//2����Щ�ǳ�ʼֵ�����ǿ����Լ��ı�,����ֻ���ڶ����ʱ��ı�
//ö�������������г���ȡֵ����ö�ٳ���
};

int main()
{
	//int a = N;
	////printf("%d", a);

	//enum Sex s1 = secret;
	//enum Sex s2 = male;
	////male = 4;  //����ı�ֵ�Ǵ����
	//printf("%d  %d  %d", male, female, secret);

	char a1[] = "abcdef";
	char a2[] = { 'a','b','c','d','e','f','\0'};
	char a3[] = { 'a','b','c','d','e','f' };
	printf("%s%d\n", a1,strlen(a1));
	printf("%s%d\n", a2,strlen(a2));//'\0'ֻ��һ��������־��strlenͳ�Ƶ���\0֮ǰ���ַ�������
	printf("%d\n", strlen(a3));
	printf("abc\0def");//�����3������\0��ͳ��ǰ���abc���ȣ�3
	printf("\nY\b=");
	printf("\n%c", '\130');//��ʾ��ӡ�˽��Ƶ�130ת����ʮ����֮������ֶ�Ӧ��ascll��,\������1-3������
	printf("\n%c", '\x23');//��ʾ��ӡʮ�����Ƶ�x23����,x������1-2������
	printf("\n%d", strlen("c:\tabc\628\test.c"));


}