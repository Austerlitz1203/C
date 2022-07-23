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

    jin(pf,&b);//���ļ���д������
    fclose(pf);//Ҫ���ļ��ڶ����ݣ���Ҫ��ֻ����ʽ���´��ļ�
    pf=NULL;

    FILE *pff=fopen("st.txt","r");
    chu(pff,a);
    paixu(a,4);//�����ܳɼ�����
    fclose(pff);
    pff=NULL;//��ȡ���ݺ�������ɣ�Ҫ�������ļ�����������
//    for (int i=0;i<4;i++)
//    {
//    //fscanf(m,"%s %d %d %d %d\n",n[i].Name,&(n[i].Mat),&(n[i].Eng),&(n[i].Com),&(n[i].Dian));
//    printf("%s %d %d %d %d\n",a[i].Name,a[i].Mat,a[i].Eng,a[i].Com,a[i].Dian);
//    }

    FILE *pd=fopen("st.txt","w");//�������ĳɼ��ŵ��ļ�����
    fputs("����	�ߵ���ѧ	Ӣ��	�����	��ѧ	�ܷ�\n",pd);//�����һ��
    for (int i=0;i<4;i++)//��������
        fprintf(pd,"%s\t %d\t %d\t %d\t %d\t %d\n",a[i].Name,a[i].Mat,a[i].Eng,a[i].Com,a[i].Dian,a[i].Sum);
    bjg(a);//���Ҳ�����������ѧ���Ϳγ�
    fclose(pd);//�ر��ļ�
    pd=NULL;
    return 0;
}

void bjg(stu *m)
{
    printf("\n");
    for (int i=0;i<4;i++)
    {
        if (m[i].Mat < 60)
            printf("%s ��ѧ %d\n",m[i].Name,m[i].Mat);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Eng < 60)
            printf("%s Ӣ�� %d\n",m[i].Name,m[i].Eng);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Com < 60)
            printf("%s �����  %d\n",m[i].Name,m[i].Com);
    }
     for (int i=0;i<4;i++)
    {
        if (m[i].Dian < 60)
            printf("%s ��ѧ  %d\n",m[i].Name,m[i].Dian);
    }
}
