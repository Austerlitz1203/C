#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[10];
    srand(time(NULL));
    for (int i=0;i<10;i++)
        a[i]=rand()%100;
    for (int i=0;i<9;i++)
    {
        int pos=i;
      for (int j=i;j<10;j++)
      {
        if (a[j]<a[pos]) pos=j;
      }
      int k=a[pos];
      a[pos]=a[i];
      a[i]=k;
    }
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
