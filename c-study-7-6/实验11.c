/*
#include<stdio.h>
int main()
{
    char a[100],*p;
    int cnt=0,i=0;
    p=a;
    gets(p);
    while( *(p+i) != '\0' )
    {
        cnt++;
        i++;
    }
    //for ( ; *p != '\0' ; p++) cnt++;
    printf("%d",cnt);
}


//总结：一开始把*p和a[]定义为int类型，所以结果一直错误
*/

/*
#include<stdio.h>

int *fmax(int *a,int x)
{
    int *p;
    p=a;
    for (int i=0;i<x;i++)
    {
        if (*p < *(a+i) )
            p=a+i;
    }
    return p;
}

int main()
{
    int a[10]={1,4,7,33,55,42,38,79,58,66};
    int x=*fmax(a,10);
    printf("%d",x);
}
*/



#include<stdio.h>
#define N 10
int sort1(int *p,int n)
{
    int t;
    for (int i=0;i<n;i++)
        for (int j=0;j<n-i;j++)
           {
               if ( *(p+j) > *(p+j+1) )
                t=*(p+j),*(p+j)=*(p+j+1),*(p+j+1)=t;
           }
}

int main()
{
    int a[N],*p;
    p=a;
    for (int i=0;i<N;i++)
        scanf("%d",p+i);
    sort1(p,N);
    for (int i=N-1;i>=0;i--)
        printf("%d  ",*(p+i));
}


/*
//9.5
#include<stdio.h>
int in(int *a)
{
    for (int i=0;i<10;i++)
        scanf("%d",a+i);
}

int dh(int *a)
{
    int max=*(a+0),min=*(a+0),t;
   for (int i=1;i<10;i++)
        if (max < *(a+i)) max=*(a+i);
   for (int i=1;i<10;i++)
        if (min > *(a+i)) min=*(a+i);
    t=max,max=*(a+9),*(a+9)=t;
    t=min,min=*(a+0),*(a+0)=t;
}

int out(int *a)
{
    for (int i=0;i<10;i++)
        printf("%d  ",*(a+i));
}
int main()
{
    int m[10],*p;
    p=m;
    in(p);
    dh(p);
    out(p);
}
*/

/*
//9.8
#include<stdio.h>
#include<time.h>
#define N 10

int paixu(int *p)
{
    int *a,t;
    a=p;
    for (int i=0;i<N;i++)
        if (*a < *(p+i))  a=p+i;
    t=*a,*a=*(p+9),*(p+9)=t;
    for (int i=0;i<N-1;i++)
        if (*a < *(p+i))  a=p+i;
    t=*a,*a=*(p+8),*(p+8)=t;
}
int main()
{
    int a[N];
    int *p=a;
    srand(time(NULL));
    for (int i=0;i<N;i++)
        *(p+i)=rand()%100;
    paixu(p);
    for (int i=0;i<N;i++)
        printf("%d  ",*(p+i));
}
*/
