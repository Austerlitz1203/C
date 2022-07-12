//指针类型的意义
//int* 四个字节
//double*  八个字节
//char* 一个字节
//
//所以，int* p; p++，每次向后四个字节
//所以，char* p; p++，每次向后八个字节
//…………类推

//#include<stdio.h>
////一维数组、二维数组传参
//test1(int (*a)[4])
//{
//    //test1函数形参这样写的原因：
//    //数组名a指向数组首元素地址，二维数组，首元素为第一行的地址
//    //第一行是一个有四个元素的一维数组
//    //所以形参必须是数组的形式，如果是int* a  ,那么是整形指针
//    //整形指针只能存放整形地址，不能存放一维数组的地址
//    //所以要用数组类型的，这个形参这样读：
//    //是一个指针，指向数组，数组的元素有四个，元素类型是int
//    // int* a[5] 错误的原因，因为这是一个数组而不是一个指针
//}
//arr(int* p)
//{
//   //正确，按上面的理解
//}
//test3(int **m)
//{
//
//}
//int main()
//{
//    int a[3][4];
//    int arr[10];
//    int **p;
//    int *pr;
//    int* prr[10];
//    test1(a);
//    test2(arr);
//    test3(&pr);
//    test3(p);
//    test3(prr);//函数形参是二级指针，传指针数组也可以
//}

//函数指针
//传的是函数的地址
//add(a,b);
//如上，add和&add都表示函数的地址，不是和数组一样，add表示首元素地址

//#include<stdio.h>
//int add(int x,int y)
//{
//    return x+y;
//}
//
//void print(char* str)
//{
//    printf("%s\n",str);
//}
//int main()
//{
//    //printf("%p",add);
//
//    //int* pa(int,int)=add;
//    //错误，理解：pa首先和()结合，成了函数，参数是两个int类型，返回值是指针
//
//    int(*pa)(int,int)=add;
//    //正确，理解：一个指针，指向一个有两个int类型参数的函数,指针类型和add函数一样为int
//    printf("%d\n",(pa)(2,3));//理解方式：add传给pa，add调用add(2,3)
//    printf("%d\n",(*pa)(2,3));//事实证明，有无*都一样,写上了只是助于理解
//    printf("%d\n",(**pa)(2,3));
//
//    void (*paa)(char *)=print;
//    (*paa)("stringusingleoWOW");
//}

//理解这段代码：  (*(void (* )())0)()
//抽丝剥茧 ，先看内部   ()0 表示强制类型转换，把0转换成括号内的类型
//0前面括号内分析：  void (*)() 这是一个函数指针，无参数，类型为void
//所以把0转换成一个指针，即一个地址，然后前面加一个*，通过地址找到了这个函数
//(*)()表示调用函数，所以最外部表示函数的调用

//void (* signal(int,void (*)(int) )(int)
//可以理解，但是写起来复杂，这里有一个简便写法：
//typedef void(* pfun_d )(int);
//pfun_d signal(int,pfun_d);
//这两段等同上面，类似于宏定义，这个是类型的宏定义，
//把void(*)(int)定义成了pfun_d



//函数指针数组
#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}

main()
{
    //指针数组
    //int* p[10];
    //函数指针数组,几个函数返回类型相同，参数类型相同
    int (*parr[5])(int,int)={" ",add,sub,mul,div};
//    for (int i=0;i<4;i++)
//        printf("%d\n",parr[i](2,3));//上面说过，有无*一样

    //用途：
    int input=0;
    do
    {
        printf("请输入运算");
        scanf("%d",&input);
        if (input>=1 && input<=4)
        {
            int x,y;
            printf("请输入要运算的两个数字");
            scanf("%d%d",&x,&y);
            int ret=parr[input](x,y);//极大缩减了用switch语句的那些东西
            printf("%d\n",ret);
        }
        else if(input==0)
            printf("退出\n");
        else
            printf("输入错误\n");

    }while(input);
}

//char* my_strcpy(char* dest,const char* src);
//1.写一个函数指针，指向mystrcpy；
// char* (*pf)(char*,const char*)
//2.写一个函数指针数组，存放4个my_strcpy函数的地址
// char* (*pfarr[4])(char*,const char*);


//经常把函数指针数组叫做转移表
