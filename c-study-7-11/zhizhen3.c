//ָ����ָ�������ָ��
//����  int (*parr[4])(int,int)   ����һ������ָ������
//дһ��ָ��ָ���������
//   int (*(*pparr)[4])(int,int)
//������(*pparr)��һ��ָ�룬ָ�����ĸ�Ԫ�ص����飬ÿ��Ԫ����int(*)(int,int)
//����ÿ��Ԫ����ָ������ָ��
//int (*par)(int,int)        ����ָ��
//int (*parr[4])(int,int)    ����ָ������
//int (*(*pparr)[4])(int,int)ָ����ָ�������ָ��


//ָ������ int* arr[10];
//����ָ�� int* (*parr)[10];������Ϊָ����һ�еģ�ָ�룬ָ����10��Ԫ�ص����飬������ÿ��Ԫ������Ϊint*
//����ָ�� int (*p)(int,int)=add;
//���ã�p(a,b);   ���� add(1,2);
//����ָ������
//int (*parr[4])(int,int);��4��Ԫ�ص����飬ÿ��Ԫ������Ϊ int(*)(int,int)
//ָ����ָ�������ָ��
//int (*(*pparr)[4])(int,int);
//ָ�룬ָ�����ĸ�Ԫ�ص����飬ÿ��Ԫ������int (*)(int,int)


//c����qsort�������������������͵�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
    char name[20];
    int age;
};
//void qsort(void* base,  //void*���Խ��������κ��������͵�ָ�룬char��int�ȵȾ���
//                          void* p;  p������*p=0���������Խ����ã�Ҳ������p++/p--
//           size_t num,  //����
//           size_t width,//ÿ��Ԫ�س���
//           int(*cmp)(const void *e1,const void *e2));  //�Ƚϵĺ���
int cmp_int(const void* e1,const void* e2)
{
//�Ƚ���������ֵ��
// *(int*)e1   *(int*)e2ǿ������ת��������
return *(int*)e1 - *(int*)e2;
}

void test1()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    struct stu a[3]={{"zhangsan",10},{"lisi",24},{"wangwu",22}};
    int sz=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for (int i=0;i<sz;i++)
        printf("%-4d",arr[i]);
    printf("\n");
}

int cmp_float(const void* e1,const void* e2)
{
//�Ƚ���������ֵ��
// *(int*)e1   *(int*)e2ǿ������ת��������
return *(float*)e1 - *(float*)e2;
}

void test2()
{
    float arry[10]={9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0};
    int szz=sizeof(arry)/sizeof(arry[0]);
    qsort(arry,szz,sizeof(arry[0]),cmp_float);
    for (int i=0;i<szz;i++)
        printf("%.2f  ",arry[i]);
    printf("\n");
}


void cmp_by_age(const void* e1,const void* e2)
{
    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void cmp_by_name(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}

void test3()
{
    struct stu a[3]={{"zhangsan",28},{"lisi",24},{"wangwu",22}};
    int szzz=sizeof(a)/sizeof(a[0]);
    qsort(a,szzz,sizeof(a[0]),cmp_by_age);
    for (int i=0;i<szzz;i++)
        printf("%s  ",a[i]);
    printf("\n");
}
void test4()
{
    struct stu a[3]={{"zhangsan",28},{"lisi",24},{"wangwu",22}};
    int szzz=sizeof(a)/sizeof(a[0]);
    qsort(a,szzz,sizeof(a[0]),cmp_by_name);
    for (int i=0;i<szzz;i++)
        printf("%s  ",a[i]);
    printf("\n");
}

int main()
{


    test1();

    test2();

    test3();

    test4();
}
