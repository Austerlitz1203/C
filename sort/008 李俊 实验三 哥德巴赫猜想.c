#include<stdio.h>
//哥德巴赫猜想
int prime(int n)
{
    int i;
    for (i=2;i<n;i++)
        if (n%i==0) return 0;//不是素数
    return 1;//是素数
}
int main()
{
    int x,j,flag=0;
    scanf("%d",&x);
    for (j=3;j<x;j++)
    {
        int a=x-j;
        if (prime(j)==1 && prime(a)==1)
        {
            flag=1;//猜想成立则flag值为1
            break;
        }
    }
    printf("%d",flag);//为1则成立，0则不成立
    return 0;
}
