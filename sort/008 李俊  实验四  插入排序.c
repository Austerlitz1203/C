#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[10];
    srand(time(NULL));
    for (int i=0;i<10;i++)
        a[i]=rand()%100;
    for (int i=1;i<10;i++)
    {
      int pos,x=a[i];
      for (pos=0;pos<i;pos++)//找到a[i]应该在的位置
      {
          if (x<a[pos]) break;
      }
      for (int j=i-1;j>=pos;j--)//从该位置到a[i-1]整体后移
      {
          a[j+1]=a[j];
      }
      a[pos]=x; //把a[i]赋到该在的位置
    }
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
//小总结：在for(pos)那个语句里面，我把pos又用int定义了一遍
//for（int pos=0） 导致这个循环内部pos和循环外部pos不一样，结果错误
