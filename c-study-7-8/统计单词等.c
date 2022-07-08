//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[5][100],t[100];
//    int i,j,pos;
//    for (int i=0;i<5;i++)
//        gets(s[i]);
////    for (int i=0;i<5;i++)
////        puts(s[i]);
//    for (int i=0;i<4;i++)
//    {
//        pos=i;
//        for (int j=i+1;j<5;j++)
//        {
//            if (strcmp(s[pos],s[j]) > 0)
//                pos=j;
//        }
//        strcpy(t,s[i]);
//        strcpy(s[i],s[pos]);
//        strcpy(s[pos],t);
//    }
//    for (int i=0;i<5;i++)
//        puts(s[i]);
//    return 0;
//}

//统计单词个数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[100];
//    int i=0,w=0,n=0;
//    gets(s);
//    while (s[i])
//    {
//        if (s[i] != ' ' && w==0)
//        {
//            n++;
//            w=1;
//        }
//        else if (w==1 && s[i]==' ')  w=0;
//        i++;
//    }
//    printf("n=%d\n",n);
//    return 0;
//}

//函数
//最大公约数  m=kn+r   不是最大公约数，把n赋给m，r赋给n
#include<stdio.h>
int gcd(int m,int n)
{
    int r;
    r=m%n;
    while (r)
    {
        m=n;
        n=r;
        r=m%n;
    }
    return n;
}

main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",gcd(x,y));
}

