//�ļ����뻺���������������
//ÿ����ʹ�õ��ļ������ڴ��п���һ���ļ���Ϣ������������Ϣ
//��Ϣ����һ���ṹ��������棬��ϵͳ������ȡ��FILE
//..��ʾ��һ·��
//FILE *pt=("../test.txt","r") ��ʾ��ֻ����ʽ����һ·���ļ����е�
//FILE *pt=("../../test.txt","r") ��ʾ��ֻ����ʽ�����ϸ�·���ļ����е�
//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//    FILE *pt=fopen("test.txt","r");
//    if (pt == NULL)
//        printf("%s\n",strerror(errno));
//
//    fclose(pt);
//    pt=NULL;
//    return 0;
//}

//stdin   ��׼�����豸
//stdout  ��׼����豸
//stderr
//����������Ĭ�ϴ�

//#include<stdio.h>
//int main()
//{
//    int ch=fgetc(stdin);
//    fputc(ch,stdout);
//    return 0;
//}


#include<stdio.h>
#include<string.h>
#include<error.h>
struct data
{
    int a;
    double b;
    char c[20];
};
int main()
{
    char a[1024]={0};
    struct data x={0};
    struct data c={0};
    FILE *pf=fopen("test.txt","r");
    if (pf == NULL)
        return 0;
    fgets(a,1024,pf);
    printf("%s",a);//�����ѻ���Ҳ����a�����Բ���Ҫ���з���

    fgets(a,1024,pf);
    printf("%s",a);//����û�л���,��Ϊ�����һ��

//      fgets(a,1024,pf);
//      puts(a);//puts�����Դ�����

//       fputs("hello",pf);//��������У�������ļ���������Ҫ���еĻ�
//       fputs("world",pf);//Ҫ�Լ��ĸ�ʽ

//        fgets(a,1024,stdin);//�ӱ�׼��������ȡ
//        fputs(a,stdout);//�������׼������

    //    fprintf(pf,"%d %.2lf %s",x.a,x.b,x.c);
    //    printf("%d %.2lf %s",x.a,x.b,x.c);

//        fscanf(pf,"%d %lf %s",&(x.a),&(x.b),x.c);//x.c�����������ǵ�ַ
//        printf("%d  %.2f  %s",x.a,x.b,x.c);

//        fscanf(stdin,"%d %lf %s",&(x.a),&(x.b),x.c);
//        //�Ӽ����������ݵ�ָ��λ��
//        fprintf(stdout,"%d %.2lf %s",x.a,x.b,x.c);
//        //��ָ��λ�ð����ݴ�ӡ��stdout������׼���������Ļ��
}
