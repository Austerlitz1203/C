#include<stdio.h>
//5.6̩�չ�ʽ
int last(int n)
{
    double d=0.0;
    int c;
    for (int i=1;;i+=2)
    {
        double a=1.0,b=1.0;
        for (int j=1;j<=i;j++)
        {
            a*=n;
            b*=j;
        }
        //printf("%.2f\n",a/b);
        if ((i-1)%4==0) d+=a/b;
        if ((i+1)%4==0) d-=a/b;
        if (a/b <= 0.000001)
        {
            c=(i+1)/2;
            printf("��Ϊ%.3f\n��ʱͳ����%d��",d,c);
            break;
        }
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    printf(last(x));
    return 0;
}
