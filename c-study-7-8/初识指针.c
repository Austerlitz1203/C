/*
指向函数的指针
函数类型 (*<函数指针标识符>)(形参类型)
float(*fp)()
函数指针变量可以指向函数的入口，但是类型要匹配
函数指针不可以进行运算 +、-、++等都不可
函数指针可以放在数组中，也可以作为参数传给函数
*/

//函数指针变量指向函数入口
//if ()



//函数指针作为函数参数
//#include<stdio.h>
//int add(int x,int y)
//{
//    return x+y;
//}
//
//int sub(int x,int y)
//{
//    return x-y;
//}
//
//cal(int (*fp)(),int a,int b)
//{
//    int t;
//    t=(*fp)(a,b);
//    return t;
//}
//
//int main()
//{
//    int x=5,y=6;
//    int z,m;
//    z=cal(sub,x,y);
//    m=cal(add,x,y);
//    printf("%d\n",z);
//    printf("%d\n",m);
//}


/*
  多级指针
  <数据类型>**<变量标识符>
  int **ppx;
  int x=10,*p,**q;
  q   对应 &p        p   &x
  *q  对应 p         *p   x
  **q 对应 *p             x

*/

//#include<stdio.h>
//int main()
//{
//    int x,*p,**q;
//    x=10;
//    p=&x,q=&p;
//    printf("%x  %x  %x  \n",&x,p,*q);
//    printf("%d  %d  %d  \n",x,*p,**q);
//}


/*
指针数组：下标变量是指针（相当于二维数组）


*/


#include<stdio.h>
main()
{
    static char *strings[5]={"AHSUIA","SABHJ","XBHJA","AUSHJBAS","ZHJKAA"};
    char **p,*q,ch;
    scanf("%c",&ch);
    for (p=strings;p<strings+5;p++)
    {
        //printf("%s\n",*(*p));
        q=*p;
        printf("%d\n",&q);
        while(*q != ch  && *q != '\0')
            q++;
        if (*q !='\0')
        {
            printf("%d the string position is %d\n",p-strings+1,q-*p+1);
            break;
        }

    }
}


/*
多级指针和多维数组

对于  int  a[i][j];有下面
a    二维数组首地址，就是第0行首地址
a+i  第i行首地址
a[i]   =   *(a+i)  第i行第0列元素地址
a[i]+j  =  *(a+i)+j  第i行第j列元素地址
*(a[i]+j) =  *(*(a+i)+j)  =  a[i][j]

*/

//#include<stdio.h>
//int main()
//{
//    int a[3][4],*p;
//    p=a[0];
//}


/*
数组指针(行指针)
类型 (*p)[N];

多看看书和网上资料
*/
//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//    int a[3][4],i,j,k,(*p)[4];
//    p=a;
//    for (int i=0;i<3;i++)
//        for (j=0;j<4;j++)
//        p[i][j]=i*10+j;
//    for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",p[i][j]);
//        printf("\n");
//      }
//      for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",*(*(p+i)+j));
//        printf("\n");
//      }
//}

/*
命令行参数
main(int x,类型 *p[])
*/


/*
#include<stdio.h>
#include<stdlib.h>
main(int c,char *s[])
{
//    int a[3][4],i,j,k,(*p)[4];
//    p=a;
//    for (int i=0;i<3;i++)
//        for (j=0;j<4;j++)
//        p[i][j]=i*10+j;
//    for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",p[i][j]);
//        printf("\n");
//      }
//      for (int i=0;i<3;i++)
//      {
//        for (j=0;j<4;j++)
//        printf("%-4d",*(*(p+i)+j));
//        printf("\n");
//      }
      {
          int i;

          for (i=0;i<c;i++)
            printf("%d: %s\n",i,s[i]);
      }
}
*/
