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

#include<stdio.h>

#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	//m = ((++a) > (++b) ? (++a) : (++b));
	//ʵ���ϱ��������һ���������㣬  4>5  ���Ǵ�ģ�����ð�ź�������,ð��ǰ�治���㣬���ص�ֵ��++5��Ϊ6������m=6��b=6��a=4

	printf("%d %d %d\n", m, a, b);

	return 0;
}