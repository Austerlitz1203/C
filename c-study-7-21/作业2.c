//#include<stdio.h>
//int main()
//{
//
//    printf("%c",6);
//    printf("\n���� %c ",6);
//
//}



#include<stdio.h>
#define N 4

double pj1(double a[],double b[],double c[],double d[])
{
    for (int i=0;i<N;i++)
        d[i]=(a[i]+b[i]+c[i])/3;
}
double zg(double a[],double b[],double c[],double d[])
{
    d[1]=a[0],d[2]=b[0],d[3]=c[0];
    for (int i=1;i<N;i++)
    {
        if (a[i] > d[1])  d[1]=a[i];
        if (b[i] > d[2])  d[2]=b[i];
        if (c[i] > d[3])  d[3]=c[i];
    }
}

double pj2(double a[],double b[],double c[],double d[])
{
    for (int i=0;i<N;i++)
    {
        d[1]+=a[i]/N;
        d[2]+=b[i]/N;
        d[3]+=c[i]/N;
    }
}


int main()
{
    char a[N][10]={"zhang3","li4","wang5","liu6"};
    double mat[N+2],eng[N+2],com[N+2],ave1[N+2]={0},top[4],ave2[4]={0};
    for (int i=0;i<N;i++)
        scanf("%lf %lf %lf",&mat[i],&eng[i],&com[i]);
    pj1(mat,eng,com,ave1);
    zg(mat,eng,com,top);
    pj2(mat,eng,com,ave2);

    printf("\n����             ��ѧ   ����  �����  ƽ����\n");
    for (int i=0;i<N;i++)
        printf("%-15s  %.2f  %.2f  %.2f  %.2f\n",a[i],mat[i],eng[i],com[i],ave1[i]);
    printf("��߷�           %.2f  %.2f  %.2f\n",top[1],top[2],top[3]);
    printf("ƽ����           %.2f  %.2f  %.2f\n",ave2[1],ave2[2],ave2[3]);
    printf("\n��������Ϣ��\n");
    for (int i=0;i<N;i++)
    {
        if (mat[i] < 60 || eng[i]<60 || com[i]<60)
            printf("%-15s  %.2f  %.2f  %.2f  %.2f\n",a[i],mat[i],eng[i],com[i],ave1[i]);
    }
}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int fapai(int a[],int b[],int c[],int d[],int e[]);//52�����������
int paixu(int a[]);//ÿλ��ҵ����ƽ��д�С��������
void xianshi(int a[],int b[],int c[],int d[],char e[53][20]);//����������

char pai[53][20]={" ","�ݻ�2","�ݻ�3","�ݻ�4","�ݻ�5","�ݻ�6","�ݻ�7","�ݻ�8",
    "�ݻ�9","�ݻ�10","�ݻ�J","�ݻ�Q","�ݻ�K","�ݻ�A",
    "����2","����3","����4","����5","����6","����7","����8","����9","����10",
    "����J","����Q","����K","����A",
    "����2","����3","����4","����5","����6","����7","����8","����9","����10",
    "����J","����Q","����K","����A",
    "����2","����3","����4","����5","����6","����7","����8","����9","����10",
    "����J","����Q","����K","����A"};//��һ������ƵĶ�ά����

int main()
{
    int a[60],wanjia1[20],wanjia2[20],wanjia3[20],wanjia4[20];
    //printf("%c\n",6);
    fapai(a,wanjia1,wanjia2,wanjia3,wanjia4);
    paixu(wanjia1);
    paixu(wanjia2);
    paixu(wanjia3);
    paixu(wanjia4);
    xianshi(wanjia1,wanjia2,wanjia3,wanjia4,pai);
    //printf("%-12s",pai[2]);
//    for (int i=1;i<53;i++)
//        printf("%4d",a[i]);
//        printf("\n");
//    for (int i=1;i<14;i++)
//        printf("%4d",wanjia1[i]);
//    printf("\n");
//    for (int i=1;i<14;i++)
//        printf("%4d",wanjia2[i]);
//    printf("\n");
//    for (int i=1;i<14;i++)
//        printf("%4d",wanjia3[i]);
//    printf("\n");
//    for (int i=1;i<14;i++)
//        printf("%4d",wanjia4[i]);
//    printf("\n");

}

int fapai(int a[],int b[],int c[],int d[],int e[])
{
    srand(time(NULL));
    for (int i=1;i<=52;i++)//��������������ظ��ġ���ΧΪ1-52��52������
        {
            a[i]=rand()%52+1;
            for (int j=1;j<i;j++)
                if (a[j]==a[i]) i--;
        }
    for (int l=1,m=2,n=3,q=4,j=1;l<53,m<53,n<53,q<53,j<14;l+=4,m+=4,n+=4,q+=4,j++)
    {
        b[j]=a[l];
        c[j]=a[m];
        d[j]=a[n];
        e[j]=a[q];
    }//��ģ4��1��ֵ�������1��ģ4��2��ֵ�������2����(3��4ͬ) ���շ���˼��
}

int paixu(int a[])
{
   for (int i=1;i<14;i++)
        for (int j=1;j<14-i;j++)
          {
              if (a[j] > a[j+1])
              {
                  int x=a[j];
                  a[j]=a[j+1];
                  a[j+1]=x;
              }
          }
}

void xianshi(int a[],int b[],int c[],int d[],char e[53][20])
{
    int x;
    printf("���һ�����ƣ�");
    for (int i=1;i<14;i++)
    {
       x=a[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("��Ҷ������ƣ�");
    for (int i=1;i<14;i++)
    {
       x=b[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("����������ƣ�");
    for (int i=1;i<14;i++)
    {
       x=c[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("����ĵ����ƣ�");
    for (int i=1;i<14;i++)
    {
       x=d[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
}


//#include<stdio.h>
//int main()
//{
//    printf("%-4c%-4c%-4c%-4c%-4c%-4c",5,20,45,56,60,75);
//}
