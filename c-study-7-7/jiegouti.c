#include<stdio.h>
#include<stdlib.h>

struct stu
{
    char name[20];
    int age;
    int num;
}x1,x2,x3,x4;
//������Ҫ�����ȫ�ֱ���������ɾֲ�����


struct
{
   int a;
   char b;
}pt;

struct
{
    int a;
    char b;

} *pst;

int main()
{
    pst=&pt;
    return 0;
}
//�ᱨ����Ϊ�ڱ��������������������ṹ��������Ȼ����ı�������һ��
//�������ῴ���ǲ�ͬ�����ͣ�Ȼ����һ�����͵�ַ������һ������ָ�������
//����ģ�ֻ�ܸ���ͬ����ָ�����


struct node
{
    int a;
    struct node n;
};
//�������ṹ���������һ���Լ��������ǲ����Ե�(���԰�����������)
//sizeof(struct node)   n�������int���Լ����͵ģ��޷�������Ӧ��С�Ŀռ�

struct node
{
    int a;
    struct node* next;
};
//�ṹ���������һ��ͬ���͵�ָ���ǿ��Ե�
//�����ӿ��ԣ��������ָ����ָ��������һ�����͵ĵ�ַ
//��ַ��С����ȷ��������



//1
typedef struct node
{
    int a;
    struct node* b;
}node;//�ѽṹ��������Ϊnode


//�����ṹ��typedef
typedef struct
{
    int a;
    node* b;//�����޷���������ȶ�����node��������node���ָ���ٶ���node
            //���Խ���ʹ�����淽��typedef����Ҫ�����ṹ��tpd
}node;

int main()
{
    struct node n1;
    node n2;
    //(��1����)���־���
}



//��ʼ��
struct s
{
    char arr[20];
    int a;
    struct t m;
    double b;
    char c;
};

struct t
{
    char name[20];
    double age;
};
int main()
{
    struct s s1={"djsadsda",22,{"lisi",18},3.14,'d'};
    printf("%s%d%lf%c",s1.arr,s1.a,s1.b,s1.c);
    printf("%s%lf",s1.m.name,s1.m.age);
}

//�ṹ�����
//1.��Ԫ�غͽṹ���ַָ����ڴ�λ��ƫ��Ϊ0
//2.����Ԫ����ƫ����Ϊ��Ԫ�����͵���������λ�ô洢
//3.���ڴ浥ԪҪ����������(���ж������������ģ��൱�ڰ��������߸�)��������
//��������Ĭ�϶������͸ó�Ա������������С���Ǹ�
//����int��4��char��1
//����ṹ������Ƕ�׽ṹ�壬��ôǶ�׵Ľṹ�������Ϊ�Լ��ڲ���������
struct date
{
    double a;
    char b;
    int c;
};
//sizeof(struct date)�����16   8+1=9  12+4=16

struct sty
{
    char m;
    struct date n;
    int x;
};
//����char1��λ�ã�Ȼ��n��СΪ16������������8��������ƫ����Ϊ8��λ�ÿ�ʼ
//�м��˷����߸��ռ�


//why���룺
//1.�еı������ֻ���ض�λ�ö��ض�����
//2.��ȡ�ڴ��ʱ�򣬰�һ������һ��һ����
//�����ĸ��ڴ��һ�Σ���ʱ��
//{
//   char a;
//   int b;
//}
//������Ƕ���ģ���ôռ������ռ䣬����bҪ������
//������룬a��b��ֻ��Ҫ��һ��
//�ṹ�����ʱ���ڴ�С�İ취����ռ�ÿռ�С�ľ�����һ��

//c�����޸�Ĭ�϶���������
#pragma pack(4)//����Ĭ�϶�����Ϊ4

         //���м����д���Ĭ�϶���������4

#pragma pack()//ȡ�����õ�Ĭ�϶�����

struct data
{
    char a;
    double b;
    int c;
};

////offsetof  ͷ�ļ�<stddef.h>   ǰ��ṹ���������������
//���ر����ڽṹ�������ƫ����
//offsetof(struct data,a);  =0
//offsetof(struct data,b);  =8
//offsetof(struct data,c);  =16

