#include<stdio.h>
//5.3水仙花数
int main()
{
    int x,y=0,a[3];
    printf("请输入一个三位数\n");
    scanf("%d",&x);
    int tem=x;
    for (int i=1;i<=2;i++)
    {
        a[i]=x%10;
        x/=10;
    }
    a[3]=x;
    for (int j=1;j<=3;j++)
    {
        y+=a[j]*a[j]*a[j];
    }
    if (tem==y)
        printf("这个数是水仙花数,因为%d=%d^3+%d^3+%d^3",tem,a[3],a[2],a[1]);
    else printf("这个数不是水仙花数,因为%d!=%d^3+%d^3+%d^3",tem,a[3],a[2],a[1]);
    return 0;
}
