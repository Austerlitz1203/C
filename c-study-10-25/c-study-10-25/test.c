#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int MAX(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//#define MAX(x,y) (x>y?x:y)
//
//#define SQUARE(x) x*x
////#define SQUARE(x) (x)*(x)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//
//	pritnf("%d\n", SQUARE(5));
//	pritnf("%d\n", SQUARE(5+1)); //���������x�������žͻ�����������
//	return 0;
//}


//#include<stdio.h>
//
//#define M 10
//
//#define MAX(x,y) ((x)>(y)?(x):(y))  // �������ţ���ֹx��y�Ǳ��ʽ�����
//
//
//int main()
//{
//	int m = MAX(2 + 3, M);
//	printf("%d\n", m);
//
//	return 0;
//}



// #  ��  ##
// # ���԰Ѳ������뵽�ַ�����

//#include<stdio.h>
//
//#define PRINT(val,format) printf("The value of "#val" is:"format"\n",val)
////����������棬#val�ǰ�val����һ���ַ������ģ����Զ��������ţ��൱�� #val== "val"    ��format������ "%d" ֮���
//
//int main()
//{
//	int a = 10, b = 20;
//	float c = 23.44;
//	//�������ͺ��鷳��ÿ��ֻ����΢�����Ķ�
//	//printf("The value of a is:%d \n", a);
//	//printf("The value of b is:%d \n", b);
//	//printf("The value of c is:%f \n", c);
//
//	PRINT(a, "%d");
//	PRINT(b, "%d");
//	PRINT(c, "%f");
//
//	return 0;
//}



//## ���Ժϲ�����Ƭ��

//#include<stdio.h>
//
//#define CAT(a,b) a##b  //��a��b�ϲ�������
//int main()
//{
//	int Class1 = 10;
//	int Class2 = 20;
//	printf("%d\n", CAT(Class, 1));
//	printf("%d\n", CAT(Class, 2));
//	return 0;
//}


//������и����õĲ������ݸ���

//#include<stdio.h>
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int m = MAX(++a, ++b);
//	//m = ((++a) > (++b) ? (++a) : (++b));
//	//ʵ���ϱ��������һ���������㣬  4>5  ���Ǵ�ģ�����ð�ź�������,ð��ǰ�治���㣬���ص�ֵ��++5��Ϊ6������m=6��b=6��a=4
//
//	printf("%d %d %d\n", m, a, b);
//
//	return 0;
//}




//��������
//#include<stdio.h>
////#define _DEBUG_
////����һ�еĺ궨��ע�͵�������Ͳ�����ӡ
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//#ifdef _DEBUG_
//		printf("%d\n", arr[i]);
//#endif // DEBUG
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//
//#if 2>3
//	printf("haha\n");
//#elif 3>0
//	printf("hehe\n");
//#else
//	pritnf("wagaga\n");   //�����������ģ���Ԥ����׶β��ᱻ���뵽������ȥ������ͨ��linux�۲⵽
//#endif // 2>3
//
//
//	return 0;
//}




//Ƕ��ָ��

//#include<stdio.h>
//#define CASE2
//#define CHOICE2
//
//
//int main()
//{
//#if defined(CASE1)    
//#ifdef OPTION1
//	pritnf("option1\n");
//#endif // OPTION1
//#ifdef OPTION2
//	printf("option2\n");
//#endif // OPTION2
//
//#elif defined(CASE2) 
//#ifdef CHOICE1
//	pritnf("choice1\n");
//#endif // CHOICE1
//#ifdef CHOICE2
//	printf("choice2\n");
//#endif // CHOICE2
//
//#else
//	pritnf("Nothing\n");
//
//#endif // DEBUG
//
//
//	return 0;
//}



//ͷ�ļ���������
// 1�� #include<>   ���ַ�����ֱ���ڱ�׼·��������ͷ�ļ���Linux���� /user/include��
// 2�� #include ""  ���ַ����ǣ����ڱ��ع������ң���û��""�ڲ���ͷ�ļ���û�еĻ�����ȥ��׼·�������Ҹ�ͷ�ļ�
//���ԣ���ʹ�ÿ��ͷ�ļ���ʱ��ֱ�ӵ�һ�֣���Ҫ�ڶ��֣�Ч�ʵ�


//ͷ�ļ�Ƕ�װ��������
//��һ���������棬ʱ��һ��ͷ�ļ��ᱻ���ö�Σ�����Ҫ�����ΰ��������
#include<stdio.h>

#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"
#include "test.h"



int main()
{


	return 0;
}
