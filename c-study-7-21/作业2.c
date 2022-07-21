//#include<stdio.h>
//int main()
//{
//
//    printf("%c",6);
//    printf("\n黑桃 %c ",6);
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

    printf("\n姓名             数学   外语  计算机  平均分\n");
    for (int i=0;i<N;i++)
        printf("%-15s  %.2f  %.2f  %.2f  %.2f\n",a[i],mat[i],eng[i],com[i],ave1[i]);
    printf("最高分           %.2f  %.2f  %.2f\n",top[1],top[2],top[3]);
    printf("平均分           %.2f  %.2f  %.2f\n",ave2[1],ave2[2],ave2[3]);
    printf("\n不及格信息：\n");
    for (int i=0;i<N;i++)
    {
        if (mat[i] < 60 || eng[i]<60 || com[i]<60)
            printf("%-15s  %.2f  %.2f  %.2f  %.2f\n",a[i],mat[i],eng[i],com[i],ave1[i]);
    }
}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int fapai(int a[],int b[],int c[],int d[],int e[]);//52张牌随机发出
int paixu(int a[]);//每位玩家的手牌进行从小到大排序
void xianshi(int a[],int b[],int c[],int d[],char e[53][20]);//输出玩家手牌

char pai[53][20]={" ","草花2","草花3","草花4","草花5","草花6","草花7","草花8",
    "草花9","草花10","草花J","草花Q","草花K","草花A",
    "方块2","方块3","方块4","方块5","方块6","方块7","方块8","方块9","方块10",
    "方块J","方块Q","方块K","方块A",
    "红桃2","红桃3","红桃4","红桃5","红桃6","红桃7","红桃8","红桃9","红桃10",
    "红桃J","红桃Q","红桃K","红桃A",
    "黑桃2","黑桃3","黑桃4","黑桃5","黑桃6","黑桃7","黑桃8","黑桃9","黑桃10",
    "黑桃J","黑桃Q","黑桃K","黑桃A"};//开一个存放牌的二维数组

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
    for (int i=1;i<=52;i++)//先生成随机、无重复的、范围为1-52的52个数字
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
    }//把模4余1的值赋到玩家1，模4余2的值赋到玩家2……(3、4同) 按照发牌思想
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
    printf("玩家一的手牌：");
    for (int i=1;i<14;i++)
    {
       x=a[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("玩家二的手牌：");
    for (int i=1;i<14;i++)
    {
       x=b[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("玩家三的手牌：");
    for (int i=1;i<14;i++)
    {
       x=c[i];
       printf("%-8s",e[x]);
    }
    printf("\n");
    printf("玩家四的手牌：");
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
