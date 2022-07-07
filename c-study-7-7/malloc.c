#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<string.h>
int main()
{
    int *p=(int*)malloc(10*sizeof(int));
    //过程：
    // malloc(10*sizeof(int) 分配十个int类型的空间
    //这个函数返回的是申请的那块空间的地址
    //int* p= malloc(10*sizeof(int)
    //又因为malloc韩式本来的返回类型是void*，而这里指针类型为int*
    //所以强制类型转换
    //int *p=(int*)malloc(10*sizeof(int));

    if (p== NULL)
    {
        //开辟空间失败的话，打印原因
        //要检查是否开辟成功
        printf("%s\n",strerror(errno));
    }
    else
    {
        //正常使用空间
        for(int i=0;i<10;i++)
            *(p+i)=i;
        for(int i=0;i<10;i++)
            printf("%-4d",*(p+i));
    }
    //申请的空间使用结束,头文件是stdlib.h
    free(p);
    p=NULL;//虽然释放了，但是p还是能找到那块空间，为了避免破坏，所以NULL
}
