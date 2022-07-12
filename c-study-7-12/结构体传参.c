#include<stdio.h>

struct stu
{
   int a;
   double b;
   char c;
};

void test1(struct stu pst)  //传值，相当于开辟了另一个空间来进行函数内部操作
{
    pst.a=100;         //函数生命周期结束之后，空间被还给系统，那么无此空间
    pst.b=19.2;
    pst.c='d';
}

void test2(const struct stu* pstd)//加个const保护地址不变
{
    pstd->a=10;    //传地址，那么函数内部操作是在原地址指向的地方，即
    pstd->b=10.2;  //原空间操作的，所以可以改变s里面的值
    pstd->c='a';
}
int main()
{

    struct stu s={0};
    test1(s);

    //test2(&s);
    printf("%d  %lf  %c",s.a,s.b,s.c);
}
//const作用，保护被修饰的东西不被改变
//所以建议以后结构体传参传地址，并且前面加const

//test1() 和 test2()选择 test2()的原因
//1.函数传参的时候，参数是需要压栈,会有时间和空间上的系统开销。
//2.如果传递一个结构体对象的时候，结构体过大，
//参数压栈的的系统开销比较大，所以会导致性能的下降。
