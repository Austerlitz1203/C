#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{

	////"abcdef"; //��Ϊһ�����ʽ������ֵ����Ԫ�ص�ַ
	//char* ps = "abcdef";//��˼�ǰ�����ַ������׵�ַ�ŵ�ps����
	//printf("%s\n", ps);
	//int arr[3] = { 1,2,3 };
	//int* p = arr;
	//int(*pa)[3] = &arr;
	//printf("%d\n", *(*pa+1));//pa ����������ĵ�ַ��*pa��������Ԫ�ص�ַ
	//
	//printf("%u %u\n", p, pa);
	//printf("%u  %u\n", p+1, pa+1);//������Կ���,��Ȼarr��&arr��ֵһ���������������Ͳ�һ����һ����int*���͵�
	//                              //ָ�룬һ���� int(*)[3]���͵�ָ��
	//
	//printf("%d\n", sizeof(*&arr));//&a��һ������ĵ�ַ��������ָ�����ͣ�*&a�Ƕ�����ָ����н����ã����ʵ���һ������Ĵ�С
	////Ҳ���Կ���*&����������sizeof(arr),arr��sizeof������������������ĵ�ַ
	//printf("%d\n", sizeof(&*arr));//���������Ͳ�һ���ˣ�*a��ʾ��Ԫ�أ���&������Ԫ��ȡ��ַ��������4/8
	//printf("%d", sizeof(pa));//paֻ������һ����ַ����Ȼָ�����飬��������Ȼ��һ��ָ�룬��С����4/8


	////arr ��������������Ԫ�ص�ַ
	//int* pb = arr;
	//printf("%d", *pb);


	//int (*arr[5])(int x, int y);//����ָ������
	//&arr;//��Ҫһ��ָ����ָ�������ָ���������
	//int (*(*pa)[5])(int x, int y)=&arr;
	//��ǰ���˼����������һ���ģ�һ��ָ�룬ָ��������ô(*pa)[5]�ͳ�����
	//���������Ԫ�������Ǻ���ָ�� �����Է���ֵΪ int(* )(int x,int y);����д������




	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));//������arr��������sizeof�ڣ�����arr��ʾ��Ԫ�ص�ַ��+0����Ȼ����Ԫ�ص�ַ
	//printf("%d\n", sizeof(&arr));//�����&arr������һ��������ĵ�ַ��sizeof��ȡ���ַ���ǵ�ַ������4/8
	//printf("%d\n", sizeof(&arr + 1));//���������һ��ָ�����pָ��arr��strlen(p)�������ֵ����Ϊp�����arr��ַ
	                                   //����&p��p�ĵ�ַ��p������ʲô˭Ҳ��֪��

	//printf("%d\n", strlen(arr));//��������ֵ����Ϊֻ֪���������ֽڷŵ���abcdef������֪��abcdefǰ��ͺ�����ʲô
	//                          //����ʱ�˿�arr����Ԫ�ؼ�a�ĵ�ַ����strlen�Ǽ��㵽'\0'��AScll����0�����������Ǻ��沢��
	//                          //֪��0����\0��������������ֵ

	//printf("%d\n", strlen(*arr));//���������Ϊstrlen����Ӧ���ǵ�ַ����������*arr����Ԫ��a������ʵ���ϵ�����
	//                             //a��ascll��ֵ97���ַ���������ascll��ֵ�������Է��ʵ���97��ַ���Ƿ������ڴ档
	//printf("%d\n", strlen(&arr));//���ֵ��&arr������ĵ�ַ������ĵ�ַҲ��ָ���������Ԫ�أ��͵�һ������һ��
	//printf("%d\n", strlen(&arr[0]) + 1);//Ҳ�����ֵ



	const char* p = "abcdef";
	//printf("%zu\n", sizeof(p));
	//printf("%zu\n", sizeof(p+1));
	//printf("%zu\n", sizeof(*p));
	//printf("%zu\n", sizeof(p[0]));
	//printf("%zu\n", sizeof(&p));
	//printf("%zu\n", sizeof(&p+1));
	//printf("%zu\n", sizeof(&p[0]+1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p ));//����p�����arr��ַ������&p��p�ĵ�ַ����֪��&p������ʲô���������ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ��������һ���޹أ���Ϊ��֪��&p��&p+1֮���ĸ��ֽ���û��'\0'
	printf("%d\n", strlen(&p[0] + 1));

	printf("%u   %u", p, &p);
}