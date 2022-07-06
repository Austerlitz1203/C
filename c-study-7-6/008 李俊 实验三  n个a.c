#include<stdio.h>
int main()
{
    int x,y,s=0,n;
    scanf("%d%d",&x,&y);
    n=x;
    for (int m=1;m<=y;m++)
    {
      x=n;
      for (int i=2;i<=m;i++) x=x*10+x;
      s+=x;
    }
    printf("%d",s);
    return 0;
}
