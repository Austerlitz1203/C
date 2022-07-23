#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
    char Name[20];
    int Mat;
    int Eng;
    int Com;
    int Dian;
    int Sum;
}stu;

void jin(FILE *a,struct stu *b1)
{
    for (int i=0;i<4;i++)
    {
    fscanf(stdin,"%s %d %d %d %d",b1->Name,&(b1->Mat),&(b1->Eng),&(b1->Com),&(b1->Dian));
    fprintf(a,"%s %d %d %d %d\n",b1->Name,b1->Mat,b1->Eng,b1->Com,b1->Dian);
    }

}

void chu(FILE *m,stu *n)
{
    for (int i=0;i<4;i++)
    {
    fscanf(m,"%s %d %d %d %d\n",n[i].Name,&(n[i].Mat),&(n[i].Eng),&(n[i].Com),&(n[i].Dian));
    //printf("%s %d %d %d %d\n",n[i].Name,n[i].Mat,n[i].Eng,n[i].Com,n[i].Dian);
    }

}

void paixu(stu *m,int n)
{
    for (int i=0;i<n;i++)
    {
        m[i].Sum=m[i].Mat+m[i].Eng+m[i].Com+m[i].Dian;
        //printf("%d\n",m[i].Sum);
    }
    for (int i=0;i<n-2;i++)
        for (int j=0;j<n-i-1;j++)
          {
              stu x;
              if (m[j].Sum > m[j+1].Sum)
              {
                  x=m[j];
                  m[j]=m[j+1];
                  m[j+1]=x;
              }
          }

}

void bjg(stu *m);

int main()
{
    struct stu a[4];
    struct stu b;
    FILE *pf;
    pf=fopen("st.txt","w");
    if (pf==NULL)
    {
        printf("Wrong!");
        return 0;
    }

    jin(pf,&b);//向文件内写入内容
    fclose(pf);//要从文件内读数据，需要以只读形式重新打开文件
    pf=NULL;

    FILE *pff=fopen("st.txt","r");
    chu(pff,a);
    paixu(a,4);//根据总成绩排序
    fclose(pff);
    pff=NULL;//读取数据和排序完成，要重新向文件内输入数据
//    for (int i=0;i<4;i++)
//    {
//    //fscanf(m,"%s %d %d %d %d\n",n[i].Name,&(n[i].Mat),&(n[i].Eng),&(n[i].Com),&(n[i].Dian));
//    printf("%s %d %d %d %d\n",a[i].Name,a[i].Mat,a[i].Eng,a[i].Com,a[i].Dian);
//    }

    FILE *pd=fopen("st.txt","w");//把排序后的成绩放到文件里面
    fputs("姓名	高等数学	英语	计算机	电学	总分\n",pd);//放入第一行
    for (int i=0;i<4;i++)//放入数据
        fprintf(pd,"%s\t %d\t %d\t %d\t %d\t %d\n",a[i].Name,a[i].Mat,a[i].Eng,a[i].Com,a[i].Dian,a[i].Sum);
    bjg(a);//查找并输出不及格的学生和课程
    fclose(pd);//关闭文件
    pd=NULL;
    return 0;
}

void bjg(stu *m)
{
    printf("\n");
    for (int i=0;i<4;i++)
    {
        if (m[i].Mat < 60)
            printf("%s 数学 %d\n",m[i].Name,m[i].Mat);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Eng < 60)
            printf("%s 英语 %d\n",m[i].Name,m[i].Eng);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Com < 60)
            printf("%s 计算机  %d\n",m[i].Name,m[i].Com);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Dian < 60)
            printf("%s 电学  %d\n",m[i].Name,m[i].Dian);
    }
}
