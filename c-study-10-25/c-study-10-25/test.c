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
//	pritnf("%d\n", SQUARE(5+1)); //给宏里面的x加上括号就会避免这个问题
//	return 0;
//}


//#include<stdio.h>
//
//#define M 10
//
//#define MAX(x,y) ((x)>(y)?(x):(y))  // 逐层加括号，防止x、y是表达式的情况
//
//
//int main()
//{
//	int m = MAX(2 + 3, M);
//	printf("%d\n", m);
//
//	return 0;
//}



// #  和  ##
// # 可以把参数插入到字符串中

//#include<stdio.h>
//
//#define PRINT(val,format) printf("The value of "#val" is:"format"\n",val)
////在这个宏里面，#val是把val当作一个字符串来的，会自动加上引号，相当于 #val== "val"    而format就照样 "%d" 之类的
//
//int main()
//{
//	int a = 10, b = 20;
//	float c = 23.44;
//	//像这样就很麻烦，每次只有略微几个改动
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



//## 可以合并两个片段

//#include<stdio.h>
//
//#define CAT(a,b) a##b  //把a，b合并起来了
//int main()
//{
//	int Class1 = 10;
//	int Class2 = 20;
//	printf("%d\n", CAT(Class, 1));
//	printf("%d\n", CAT(Class, 2));
//	return 0;
//}


//避免带有副作用的参数传递给宏

#include<stdio.h>

#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	//m = ((++a) > (++b) ? (++a) : (++b));
	//实际上变成了上面一行这样运算，  4>5  ，是错的，所以冒号后面运算,冒号前面不运算，返回的值是++5，为6，所以m=6，b=6，a=4

	printf("%d %d %d\n", m, a, b);

	return 0;
}