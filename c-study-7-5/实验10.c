//��(1)��

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define N1 10
//int a[100];
//
//int randa(int N);
//int paixu(int N);
//int half(int n,int N);
//
//int main()
//{
//    randa(N1);
//    paixu(N1);
//    for (int i=0;i<N1;i++)
//        printf("%d ",a[i]);
//    printf("\n��������Ҫ���ҵ�����\n");
//    int n;
//    scanf("%d",&n);
//    half(n,N1);
//    return 0;
//}
//
//int randa(int N)
//{
//    srand(time(NULL));
//    for (int i=0;i<N;i++)
//        a[i]=rand()%100;
//}
//
//int paixu(int N)
//{
//    for (int i=1;i<N;i++)
//    {
//      int pos,x=a[i];
//      for (pos=0;pos<i;pos++)//�ҵ�a[i]Ӧ���ڵ�λ��
//      {
//          if (x<a[pos]) break;
//      }
//      for (int j=i-1;j>=pos;j--)//�Ӹ�λ�õ�a[i-1]�������
//      {
//          a[j+1]=a[j];
//      }
//      a[pos]=x; //��a[i]�������ڵ�λ��
//    }
//}
//
//int half(int n,int N)
//{
//    int zuo=0,you=N-1;
//    while (zuo <= you)
//    {
//        int mid=(zuo+you)/2;
//        if (a[mid]==n)
//        {
//            printf("%d",mid);
//            return 0;
//        }
//        else if (a[mid]<n)
//            zuo=mid+1;
//        else if (a[mid]>n)
//            you=mid-1;
//    }
//    if(zuo > you) printf("�޴���");
//
//}


//(2)���ִ���

//#include<stdio.h>
//#define N 3  //��������(�����ã�N̫����������)
//int main()
//{
//    int a[N][10],b[10]={0},c[10]={0};
//    for (int i=0;i<N;i++)
//        for (int j=0;j<10;j++)
//        scanf("%d",&a[i][j]);
//
//    for (int i=0;i<N;i++)
//    {
//        for (int j=0;j<10;j++)
//        {
//            int cnt =1;//Ĭ���Ǹ���ί���Ϊ���
//            int cnt1=1;//Ĭ�ϸ���ί���Ϊ���
//          for (int k=0;k<10;k++)//ÿλ���ֵõ������з�������ÿλ��ί��ֽ��бȽ�
//          {
//              if (a[i][j] < a[i][k])//���ָ���ί��ֵ���������ί��cnt=0����������ѭ��
//              {
//                  cnt=0;
//                  break;
//              }
//          }
//          for (int l=0;l<10;l++)
//          {
//              if (a[i][j] > a[i][l])//���ָ���ί��ָ���������ί��cnt=0����������
//              {
//                  cnt1=0;
//                  break;
//              }
//          }
//          if (cnt==1)  b[j]++; //cnt=1,��ô����ί����߷�
//          if (cnt1==1) c[j]++;//cnt1=1����ô����ί����ͷ�
//        }
//    }
//    for (int i=0;i<10;i++)
//        printf("��%dλ��ί�����߷ִ���Ϊ%d,�����ͷִ���Ϊ%d\n",i+1,b[i],c[i]);
//
//}



//(3)���ܽ���

//#include<stdio.h>
//#include<string.h>
//#define d 3
//char m[100];
//
//void plus(char a[],int b);
//void real(char a[],int b);
//
//int main()
//{
//    printf("���������\n");
//    gets(m);
//    int b=strlen(m);
//    plus(m,b);
//    real(m,b);
//}
//
//void plus(char a[],int b)
//{
//    for (int i=0;i<b;i++)
//        {
//            if (m[i]>='a' && m[i]<'z'-d)  m[i]=m[i]-'a'+'A'+d;
//            else if (m[i]>='A' && m[i]<'Z'-d)  m[i]=m[i]-'A'+'a'+d;
//            else if (m[i]>'z'-d && m[i]<='z') m[i]='A'+m[i]-('z'-d)-1;
//            else if (m[i]>'Z'-d && m[i]<='Z') m[i]='a'+m[i]-('Z'-d)-1;
//        }
//    printf("���ܺ������Ϊ��\n");
//    puts(m);
//}
//void real(char a[],int b)
//{
//   for (int i=0;i<b;i++)
//        {
//            if (m[i]>'A'+d && m[i]<='Z')  m[i]=m[i]+'a'-'A'-d;
//            else if (m[i]>'a'+d && m[i]<='z')  m[i]=m[i]+'A'-'a'-d;
//            else if (m[i]>='A' && m[i]<'A'+d) m[i]=m[i]-'A'+('z'-d)+1;
//            else if (m[i]>='a' && m[i]<'a'+d) m[i]=m[i]-'a'+('Z'-d)+1;
//        }
//    printf("\n���ܺ������Ϊ��\n");
//    puts(m);
//}


//(5)
//strcmp�ڲ������������ֵ�λ�Ƚ������ַ���

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s1[100],s2[100];
//    scanf("%s%s",s1,s2);
//    int flag=0;
//    int len1=strlen(s1),len2=strlen(s2);
//    for (int i=0;i<len1 && i<len2;i++)
//    {
//        if (s1[i]<s2[i]) { flag=1;break;}
//        if (s1[i]>s2[i]) {flag=2;break;}
//    }
//    if (flag==1) printf("1");
//    else if (flag==2) printf("2");
//    else
//    {
//        if (len1<len2) printf("1");
//        else if (len1>len2) printf("2");
//        else printf("both");
//    }
//    return 0;
//}


//strstr(s1,s2)���ַ���s1�������ַ���s2

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s1[100],s2[100];
//    scanf("%s%s",s1,s2);
//    int len1=strlen(s1),len2=strlen(s2);
//    for (int i=0;i<len1;i++)
//    {
//        int flag=1;
//        for (int j=0;j<len2;j++)
//        {
//            if (s1[i+j] != s2[j])
//            {
//                flag=0;
//                break;
//            }
//        }
//        if (flag==1)
//            printf("%d",i);
//    }
//    return 0;
//}



//strcpy�ڲ�д��

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int len = strlen(s2);
    for (int i=0;i<len;i++)//�����i<len,��ô���һλ��\0�Ĳ��ᱻ���ƹ�ȥ
        s1[i]=s2[i];       //��ôs2��s1�̵�ʱ��s1��s2���Ĳ��ֲ�����ʧ
    printf("%s",s1);       //strcpy��s1��s2����������i<=lenʱ���
    return 0;
}

