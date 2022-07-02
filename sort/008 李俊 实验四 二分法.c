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

    int mid,left,right,target;
    left=0;
    right=9;
    printf("\n请输入想要查找的数字（0-100）");
    scanf("%d\n",&target);
    while(left<=right)
    {
        mid=(left+right)/2;
        if (target==a[mid])
        {
            return 1;
            break;
        }
        else if(a[mid]<target)
            left=mid+1;
        else if(a[mid]>target)
            right=mid-1;
    }
    return 0;
}
