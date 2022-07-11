//指向函数指针数组的指针
//比如  int (*parr[4])(int,int)   这是一个函数指针数组
//写一个指针指向这个数组
//   int (*(*pparr)[4])(int,int)
//分析：(*pparr)是一个指针，指向有四个元素的数组，每个元素是int(*)(int,int)
//所以每个元素是指向函数的指针
//int (*par)(int,int)        函数指针
//int (*parr[4])(int,int)    函数指针数组
//int (*(*pparr)[4])(int,int)指向函数指针数组的指针


//指针数组 int* arr[10];
//数组指针 int* (*parr)[10];（例子为指向上一行的）指针，指向有10个元素的数组，数组内每个元素类型为int*
//函数指针 int (*p)(int,int)=add;
//调用：p(a,b);   或者 add(1,2);
//函数指针数组
//int (*parr[4])(int,int);有4个元素的数组，每个元素类型为 int(*)(int,int)
//指向函数指针数组的指针
//int (*(*pparr)[4])(int,int);
//指针，指向有四个元素的数组，每个元素类型int (*)(int,int)


//c语言qsort函数可以排列任意类型的数据
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
    char name[20];
    int age;
};
//void qsort(void* base,  //void*可以接受来自任何数据类型的指针，char，int等等均可
//                          void* p;  p不可以*p=0；即不可以解引用，也不可以p++/p--
//           size_t num,  //长度
//           size_t width,//每个元素长度
//           int(*cmp)(const void *e1,const void *e2));  //比较的函数
int cmp_int(const void* e1,const void* e2)
{
//比较两个整形值的
// *(int*)e1   *(int*)e2强制类型转换成整形
return *(int*)e1 - *(int*)e2;
}

void test1()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    struct stu a[3]={{"zhangsan",10},{"lisi",24},{"wangwu",22}};
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for (int i=0;i<sz;i++)
        printf("%-4d",arr[i]);
    printf("\n");
}

int cmp_float(const void* e1,const void* e2)
{
//比较两个整形值的
// *(int*)e1   *(int*)e2强制类型转换成整形
return *(float*)e1 - *(float*)e2;
}

void test2()
{
    float arry[10]={9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0};
    int szz=sizeof(arry)/sizeof(arry[0]);
    qsort(arry,szz,sizeof(arry[0]),cmp_float);
    for (int i=0;i<szz;i++)
        printf("%.2f  ",arry[i]);
    printf("\n");
}


void cmp_by_age(const void* e1,const void* e2)
{
    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void cmp_by_name(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}

void test3()
{
    struct stu a[3]={{"zhangsan",28},{"lisi",24},{"wangwu",22}};
    int szzz=sizeof(a)/sizeof(a[0]);
    qsort(a,szzz,sizeof(a[0]),cmp_by_age);
    for (int i=0;i<szzz;i++)
        printf("%s  ",a[i]);
    printf("\n");
}
void test4()
{
    struct stu a[3]={{"zhangsan",28},{"lisi",24},{"wangwu",22}};
    int szzz=sizeof(a)/sizeof(a[0]);
    qsort(a,szzz,sizeof(a[0]),cmp_by_name);
    for (int i=0;i<szzz;i++)
        printf("%s  ",a[i]);
    printf("\n");
}

int main()
{


    test1();

    test2();

    test3();

    test4();
}
