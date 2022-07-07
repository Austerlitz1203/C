//calloc函数，开辟一个空间，并且初始值为0

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<error.h>
int main()
{
    int *p=(int* )calloc(10,sizeof(int));
    if(p==NULL)
        printf("%s\n",strerror(errno));
    else
    {
        for (int i=0;i<10;i++)
            printf("%-4d",*(p+i));
    }
    free(p);
}
