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
      for (pos=0;pos<i;pos++)//�ҵ�a[i]Ӧ���ڵ�λ��
      {
          if (x<a[pos]) break;
      }
      for (int j=i-1;j>=pos;j--)//�Ӹ�λ�õ�a[i-1]�������
      {
          a[j+1]=a[j];
      }
      a[pos]=x; //��a[i]�������ڵ�λ��
    }
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
//С�ܽ᣺��for(pos)�Ǹ�������棬�Ұ�pos����int������һ��
//for��int pos=0�� �������ѭ���ڲ�pos��ѭ���ⲿpos��һ�����������
