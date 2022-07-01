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
      for (int j=0;j<9-i;j++)
      {

        if (a[j]>a[j+1])
            {
                int k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
      }
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
