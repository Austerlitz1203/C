#include<stdio.h>
#include<stdlib.h>

struct stu
{
    char name[20];
    int age;
    int num;
}x1,x2,x3,x4;
//尽量不要定义成全局变量，定义成局部变量


struct
{
   int a;
   char b;
}pt;

struct
{
    int a;
    char b;

} *pst;

int main()
{
    pst=&pt;
    return 0;
}
//会报错，因为在编译器看来，两个匿名结构体类型虽然里面的变量类型一样
//但是他会看作是不同的类型，然而把一个类型地址赋给另一个类型指针变量是
//错误的，只能赋相同类型指针变量


struct node
{
    int a;
    struct node n;
};
//像这样结构体里面包含一个自己的类型是不可以的(可以包含其他类型)
//sizeof(struct node)   n里面包含int和自己类型的，无法创建相应大小的空间

struct node
{
    int a;
    struct node* next;
};
//结构体里面包含一个同类型的指针是可以的
//这样子可以，数据域和指针域，指针域存放下一个类型的地址
//地址大小可以确定，可以



//1
typedef struct node
{
    int a;
    struct node* b;
}node;//把结构体重命名为node


//匿名结构体typedef
typedef struct
{
    int a;
    node* b;//这里无法搞清楚是先定义了node还是先有node这个指针再定义node
            //所以建议使用上面方法typedef，不要匿名结构体tpd
}node;

int main()
{
    struct node n1;
    node n2;
    //(对1而言)两种均可
}



//初始化
struct s
{
    char arr[20];
    int a;
    struct t m;
    double b;
    char c;
};

struct t
{
    char name[20];
    double age;
};
int main()
{
    struct s s1={"djsadsda",22,{"lisi",18},3.14,'d'};
    printf("%s%d%lf%c",s1.arr,s1.a,s1.b,s1.c);
    printf("%s%lf",s1.m.name,s1.m.age);
}

//结构体对齐
//1.首元素和结构体地址指向的内存位置偏移为0
//2.其他元素在偏移量为该元素类型的整数倍的位置存储
//3.总内存单元要是最大对齐数(所有对齐数里面最大的，相当于矮子里挑高个)的整数倍
//对齐数：默认对齐数和该成员，这两个数中小的那个
//比如int是4，char是1
//如果结构体里面嵌套结构体，那么嵌套的结构体对齐数为自己内部最大对齐数
struct date
{
    double a;
    char b;
    int c;
};
//sizeof(struct date)结果是16   8+1=9  12+4=16

struct sty
{
    char m;
    struct date n;
    int x;
};
//这里char1个位置，然后n大小为16，最大对齐数是8，所以在偏移量为8的位置开始
//中间浪费了七个空间


//why对齐：
//1.有的编译软件只能特定位置读特定类型
//2.读取内存的时候，按一定数量一个一个读
//比如四个内存读一次，这时候
//{
//   char a;
//   int b;
//}
//如果不是对齐的，那么占用五个空间，对于b要读两次
//如果对齐，a和b都只需要读一次
//结构体设计时候内存小的办法：让占用空间小的尽量在一起

//c语言修改默认对齐数方法
#pragma pack(4)//设置默认对齐数为4

         //这中间所有代码默认对齐数都是4

#pragma pack()//取消设置的默认对齐数

struct data
{
    char a;
    double b;
    int c;
};

////offsetof  头文件<stddef.h>   前面结构体名，后面变量名
//返回变量在结构体里面的偏移量
//offsetof(struct data,a);  =0
//offsetof(struct data,b);  =8
//offsetof(struct data,c);  =16

