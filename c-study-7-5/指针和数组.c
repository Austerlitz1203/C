//#include<stdio.h>
//int f(int x)
//{
//    if (x>0)
//    {   printf("%d",x%10);
//        f(x/10);
//    }
//    else return 0;
//}
//int main()
//{
//    f(1234);



/*
接5.11
定义  int *p;
初始化  p=&x; p的内容是x的地址    p=0;是特殊的初始化，表示什么都不指向;
运算  p+q;  p-q;
应用

p  对应 &x
*p 对应 x

如果 p=&a[0];
     p+1 = &a[1];
     p+i=&a[i];

*p=a[0];
*(p+i)=a[i];

*/

//用指针元素存储最大元素的值
//#include<stdio.h>
//int main()
//{
//    int a[5],i,*p;
//    for (int i=0;i<5;i++)
//        scanf("%d",&a[i]);
//    for (int i=1,p=&a[0];i<5;i++)
//        {if (a[i] > *p) p=&a[i];}
//    printf("%d",*p);
//}


//指针和数组
// *p=&a;  和p=a; 区别
//https://blog.csdn.net/qq_32097581/article/details/75565077
/*
a[100]
数组名a是一个地址   （a和a[0]等价）
数组元素a[i]是一个变量 可以去地址  所以&a[i]是一个地址

a+1
a+i（是地址，可以进行运算）
*(a+i)=a[i];

p=a
和上面对应  *(a+i);  *(p+i); p[i]; a[i]; 都是一样的

ap1 和 ap2 指向同一个数组，ap1-ap2指的是两个指针间元素个数
ap1+ap2无意义
ap+i;ap-i;可以

p=N;  当且仅当N=0的时候有意义
*/
#include<stdio.h>
//void inverse(int a[],int n)
//{
//    int j,t;
//    for (int j=0;j<n/2;j++)
//    {
//        t=*(a+j);
//        *(a+j)=*(a+n-j-1);
//        *(a+n-j-1=t;
//    }
//}

//void show(int a[],int n)
//{
//    int *p=a;
//    for (;p<a+n;p++)
//        printf("%d  ",*p);
//    printf("\n");
//}
//int main()
//{
////    int a[20],*ap;
////    ap=&a[2];  // ap=a;  和 ap=&a[0]等价
//    int a[10],*p,i,j,l,t;
//    p=a;
//    for (int i=0;i<10;i++)
//        *(p+i)=rand()%100;
//    show(a,10);
//    for (int i=0;i<9;i++)
//        {
//            l=i;
//            for (int j=i+1;j<10;j++)
//            {
//                if ( *(a+l) > *(a+j) ) l=j;
//            }
//            t=*(p+i),a[i]=a[l],a[l]=t;
//        }
//    show(a,10);
//}


//字符数组
//#include<stdio.h>
//int main()
//{
//    char *s="************";
//    char s1[20]="%20.5s\n";
//    for (int i=0;i<5;i++)
//     {
//         s1[4]='0'+2*i+1;
//         s1[2]='0'+i;
//         printf(s1,s);
//     }
//}


/*
指针和函数




*/


#include<stdio.h>
swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
swap1(int *a,int *b)
{
    int t;
    t=*a,*a=*b,*b=t;
}

int *fmax(int *a,int n)  //函数名前面加一个*，这个函数返回一个地址
{
    int *p;
    p=a;
    for (int i=1;i<n;i++)
        if ( *p < *(a+i) ) p=a+i;
    return p;
}

main()
{
    int x,y,*p;
    int a[5]={7,1,15,2,3};
//    x=10,y=20;
//    printf("%d  %d\n",x,y);
//    swap(x,y);
//    printf("%d  %d\n",x,y);
//    swap1(&x,&y);
//    printf("%d  %d\n",x,y);
    x=*(fmax(a,5));
    p=fmax(a,5);
    printf("%d   %d   %d",x,*p,p-a);

}


//指针作为函数的返回值





