/*
��̬�ֲ�����
stdilb.hͷ�ļ���
���ã�
malloc()����  ���ݺ�������Ĳ�����С����ռ�
calloc(n,m)���� ��n�飬ÿһ��m���ռ�
realloc(p,n)���·��� p��ǰ������ָ�룬n�����·���Ĵ�С
free(p)ǰ�����Ŀռ��ͷ�

malloc����
void *malloc(unsinged size)
����NULL����һ��ָ��

free����
void free(ptr)
void *ptr
��ptrָ���һ���ڴ浥Ԫ�ͷ�
*/

/*
#include<stdio.h>
#include<stdlib.h>
main()
{

//    int n;
//    int a[n];
//    �������岻���ԣ�����ʵ�ַ�ʽ���Ժ궨�壬��̬�ڴ��������
//
    int n,*a;
    int *p=(int *)malloc(10*sizeof(int));
    a=p;

    for (int i=0;i<10;i++)
        a[i]=i;

//    for (int i=0;i<10;i++)
//        printf("%-4d",*(a++));


    for (int i=0;i<3;i++)
    {
            for (int j=0;j<4;j++)
        {

            printf("%-4d",*(a+4*i+j));
        }
     printf("\n");
    }
    //p++;  ��������ͻ������⣬�ı��˵�ַ��Ҫ�˻�ȥ��free

//    p++;
//    p--;
      //��������
    free(p);


}
*/


//������԰�p�óɶ�ά����
//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//     int m=3,n=4,**p;
//        p=(int **)malloc(m*sizeof(int *));
//        for (int i=0;i<m;i++)
//            p[i]=(int *)malloc(n*4);
//        for (int i=0;i<3;i++)
//        {
//            for (int j=0;j<4;j++)
//              {
//            p[i][j]=(i+1)*10+j;
//            printf("%-4d",*(*(p+i)+j));
//
//              }
//            printf("\n");
//        }
//}

//#include<stdio.h>
//#include<stdlib.h>
//main()
//{
//    char s[100];
//    char *p=(char *)malloc(100);
//    gets(p);
//    puts(p);
//}


//#include<stdio.h>
//int main(){
//char (*p)[];//��һ��ָ�룬ָ��һ���ַ�����
//char *test[20];//������һ�����飬ÿ��Ԫ��Ϊһ��ָ���ַ���������ָ��
//test[0]="hellowda";
//p=test[0];
//printf("%s",p);
//return 0;
//}

/*
�ṹ�������

��ʼ����
struct �ṹ����
{
  ���ͱ�ʶ��  ��Ա����

};
struct �ṹ���� �ṹ�����={��ʼ����};


�ṹ������
struct
{
int num;
char ����
����

}stu[2];

�ṹ�������ʼ���Ͷ�ά�����г�ʼ������
struct student
{


};




*/

#include<stdio.h>
int main()
{
    char *p="abcdef";
    printf("%c",*(p+3));
    //printf("%s",p);
}


