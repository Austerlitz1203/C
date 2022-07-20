/*
动态分布函数
stdilb.h头文件中
常用：
malloc()函数  根据后面给出的参数大小分配空间
calloc(n,m)函数 有n块，每一块m个空间
realloc(p,n)重新分配 p是前面分配的指针，n是重新分配的大小
free(p)前面分配的空间释放

malloc函数
void *malloc(unsinged size)
返回NULL或者一个指针

free函数
void free(ptr)
void *ptr
把ptr指向的一段内存单元释放
*/

/*
#include<stdio.h>
#include<stdlib.h>
main()
{

//    int n;
//    int a[n];
//    这样定义不可以，但是实现方式可以宏定义，动态内存分配如下
//
    int n,*a;
    int *p=(int *)malloc(10*sizeof(int));
    a=p;

    for (int i=0;i<10;i++)
        a[i]=i;

//    for (int i=0;i<10;i++)
//        printf("%-4d",*(a++));


    for (int i=0;i<3;i++)
    {
            for (int j=0;j<4;j++)
        {

            printf("%-4d",*(a+4*i+j));
        }
     printf("\n");
    }
    //p++;  加上这个就会有问题，改变了地址，要退回去再free

//    p++;
//    p--;
      //这样可以
    free(p);


}
*/


//这里可以把p用成二维数组
//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//     int m=3,n=4,**p;
//        p=(int **)malloc(m*sizeof(int *));
//        for (int i=0;i<m;i++)
//            p[i]=(int *)malloc(n*4);
//        for (int i=0;i<3;i++)
//        {
//            for (int j=0;j<4;j++)
//              {
//            p[i][j]=(i+1)*10+j;
//            printf("%-4d",*(*(p+i)+j));
//
//              }
//            printf("\n");
//        }
//}

//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//    char s[100];
//    char *p=(char *)malloc(100);
//    gets(p);
//    puts(p);
//}


//#include<stdio.h>
//int main(){
//char (*p)[];//是一个指针，指向一个字符数组
//char *test[20];//首先是一个数组，每个元素为一个指向字符（串）的指针
//test[0]="hellowda";
//p=test[0];
//printf("%s",p);
//return 0;
//}

/*
结构体和联合

初始化：
struct 结构体名
{
  类型标识符  成员名；

};
struct 结构体名 结构体变量={初始数据};


结构体数组
struct
{
int num;
char ……
……

}stu[2];

结构体数组初始化和二维数组中初始化相似
struct student
{


};




*/

#include<stdio.h>
int main()
{
    char *p="abcdef";
    printf("%c",*(p+3));
    //printf("%s",p);
}


