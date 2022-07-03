//找素数
//#include<stdio.h>
//int isprime(int x)
//{
//    for (int i = 2;i*i <= x;i++)
//    {
//        if (x % i == 0)
//             return 0;
//    }
//    return x;
//}
//
//int main()
//{
//    int num,cnt=0;
//    scanf("%d",&num);
//    printf("%d\n",isprime(num));
//    for (int i=3;i<=100;i++)
//    {
//        if (isprime(i) == 0) continue;
//        printf("%-3d",isprime(i));
//        if (isprime(i) != 0) cnt++;
//    }
//    printf("\n%d",cnt);
//}




//计算输入整数各位数字相加之和
//#include<stdio.h>
//computNum( int num)
//{
//    int ans=0;
//    while(num!=0)
//    {
//        ans=num%10+ans;
//        num/=10;
//    }
//    printf("%d",ans);
//}
//int main()
//{
//    int x;
//    scanf("%d",&x);
//    computNum(x);
//}



//求最小公倍数

#include<stdio.h>
mulNum(int a,int b)
{
    int x=a,y=b;
    while (a != b)
    {
        while(a>b)
        {
            b+=y;
        }
        while(a<b)
        {
            a+=x;
        }
    }
    printf("%d",a);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    mulNum(a,b);
}




//递归fibo

//#include<stdio.h>
//int fibo(int x)
//{
//    if (x==1 || x==2)
//        return 1;
//
//        return fibo(x-1)+fibo(x-2);
//}
//
//int main()
//{
//    int m;
//    scanf("%d",&m);
//    printf("%d",fibo(m));
//}




//十个数找最大数
/*
#include<stdio.h>
int max(int a[])
{
    for (int i=0;i<9;i++)
    {
        int x=i;
        for (int j=i;j<10;j++)
        {
            if (a[j]<a[x]) x=j;
            int t=a[x];
            a[x]=a[i];
            a[i]=t;
        }
    }
    printf("%d",a[9]);
}

int main()
{
    int a[20];
    for (int i=0;i<10;i++)
    scanf("%d",&a[i]);
    max(a);
}
*/


