//牛顿迭代法
/*
#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*x*x;
}
double df(double x)
{
    return 3*x*x-10*x+16;
}


main()
{
    double x,x0;
    x=1;
    while(fabs(f(x)) > 0.001)
    {
        x0=x;
        x=x0-f(x0)/df(x0);
        printf("%f  %f  %f\n",x,x0,f(x));
    }
}
*/


//编译预处理
//宏定义    不带参数的定义    #define  标识符（宏名）    字符串（宏译）
//宏名一般大写字母
//如果字符串一行装不下，可以放到下一行，只需要在上一行结尾加一个\


/*
带参数的宏定义
define和宏名之间没有空格
#defineS(a,h) 0.5*a*h

直接替换（机械替换）
#defineS(a,h) 0.5*a*h
area=(5+3,2); //area=0.5*5+3*2

副作用 #defineS(x) x*x
S(i++)运算结果是i*(i+1);可能会认为是i*i;

取消宏定义  #undefine 宏名
*/

#include<stdio.h>
#define N 10+2
#define S(x) x*x
int main()
{
    int a=10,b=2,c=4,x,y;
    x=a*N*b;
    printf("%d\n",x);
    y=S(c++);
    printf("%d",y);
}


/*
文件包含
#include<> 建议用，
#include"" 先到当前工作目录里面找，再到系统里面找
*/

/*
条件编译

#ifdef<标识符>
   程序段1
#else
   程序段2
#endif


#ifndef<标识符>
   程序段1
#else
   程序段2
#endif
*/



/*
指针
定义指针变量： <类型> *<变量标识符>，*<变量标识符>……;
int *PX;       这个类型是指，指针变量指向的类型
float *q;

指针变量的使用
& :取地址运算符
* :指针运算符(取内容运算符)


*/

//#include<stdio.h>
//int main()
//{
//    int a,b;
//    int *p;
//    a=10,b=100;
//    printf("%d %d \n",a,b);
//    p=&a;
//    printf("%d %d \n",&a,*p);
//}
