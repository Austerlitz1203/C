//1��ͳ�Ƹ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[100];
//    int a[10]={0},i=0;
//    gets(s);
//    while (s[i])
//    {
//        if( s[i] >= 'A' && s[i]<='Z')
//            a[0]++;
//        else if(s[i] >= 'a' && s[i]<='z')
//            a[1]++;
//        else if(s[i] >= '0' && s[i]<='9')
//            a[2]++;
//        else if(s[i] == ' ')
//            a[3]++;
//        else a[4]++;
//        i++;
//    }
//    printf("��д��ĸ����Ϊ��%d\n",a[0]);
//    printf("Сд��ĸ����Ϊ��%d\n",a[1]);
//    printf("���ָ���Ϊ��%d\n",a[2]);
//    printf("�ո����Ϊ��%d\n",a[3]);
//    printf("�����ַ�����Ϊ��%d\n",a[4]);
//    return 0;
//}
//��scanf�޷�ͳ�ƿո�Ҫ��gtes

//2.�滻
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[100],t[100];
//    printf("�������ַ���s���Ի��н������Լ���s�̵��ַ���t���Ի��н�������������Ҫ�滻����ʼλ�úͳ���\n");
//    gets(s);
//    gets(t);
//    int a=strlen(s),b=strlen(t),pos,l;
//    scanf("%d%d",&pos,&l);
//    for (int i=pos,j=0;i<=pos+l,j<=l;i++,j++)
//        s[i]=t[j];
//    puts(s);
//    return 0;
//}

//���������ַ����飬������Ĵ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[6][100],a[5][100];
//    for (int i=0;i<5;i++)
//        gets(s[i]);
//    for (int i=1;i<5;i++)
//    {
//        int j;
//        strcpy(a[i],s[i]);
//        for (j=0;strcmp(s[j],s[i]) < 0;j++) ;
//        for (int k=i-1;k>=j;k--)
//            strcpy(s[k+1],s[k]);
//        strcpy(s[j],a[i]);
//    }
//    printf("\n");
//        puts(s[3]);
//    return 0;
//}


//��֧���귨
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int cnt=0,i=12,j=0;
//    char a[20]="���ұ����켺�����ɹ�";
//    char b[25]="�ӳ���î������δ�����纥";
//
//    while (cnt<60)
//    {
//        for (int x=i;x<=i+1;x++)
//            printf("%c",a[x]);
//        for (int y=j;y<=j+1;y++)
//            printf("%c",b[y]);
//        if (i==18) i=-2;
//        if (j==22) j=-2;
//        i+=2;
//        j+=2;
//        cnt++;
//        printf("\n");
//    }
//    return 0;
//}


//prime����
//#include<stdio.h>
//int prime (int x)
//{
//    for (int i=2;i*i<=x;i++)
//    {
//        if (x%i==0) return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%d",prime(n));
//}

//gcd����
//#include<stdio.h>
//#include<math.h>
//int gcd(int x,int y)
//{
//    if (x<y)
//    {
//        for (int i=x;i>=sqrt(x);i--)
//        {
//            if (x%i==0 && y%i ==0)
//                {
//                    printf("���Լ��Ϊ%d",i);
//                    break;
//                }
//        }
//    }
//    else if (x>y || x==y)
//       {
//        for (int i=y;i>=sqrt(x);i--)
//        {
//            if (x%i==0 && y%i ==0)
//                {
//                    printf("���Լ��Ϊ%d",i);
//                    break;
//                }
//        }
//       }
//}
//
//int main()
//{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    gcd(a,b);
//}

//slen����
//#include<stdio.h>
//void slen(char a[])
//{
//    int n=0;
//    while(a[n])
//    {
//        n++;
//    }
//    printf("%d",n);
//
//}
//int main()
//{
//    char s[100];
//    gets(s);
//    slen(s);
//}
