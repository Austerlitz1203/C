//ָ�����͵�����
//int* �ĸ��ֽ�
//double*  �˸��ֽ�
//char* һ���ֽ�
//
//���ԣ�int* p; p++��ÿ������ĸ��ֽ�
//���ԣ�char* p; p++��ÿ�����˸��ֽ�
//������������

//#include<stdio.h>
////һά���顢��ά���鴫��
//test1(int (*a)[4])
//{
//    //test1�����β�����д��ԭ��
//    //������aָ��������Ԫ�ص�ַ����ά���飬��Ԫ��Ϊ��һ�еĵ�ַ
//    //��һ����һ�����ĸ�Ԫ�ص�һά����
//    //�����βα������������ʽ�������int* a  ,��ô������ָ��
//    //����ָ��ֻ�ܴ�����ε�ַ�����ܴ��һά����ĵ�ַ
//    //����Ҫ���������͵ģ�����β���������
//    //��һ��ָ�룬ָ�����飬�����Ԫ�����ĸ���Ԫ��������int
//    // int* a[5] �����ԭ����Ϊ����һ�����������һ��ָ��
//}
//arr(int* p)
//{
//   //��ȷ������������
//}
//test3(int **m)
//{
//
//}
//int main()
//{
//    int a[3][4];
//    int arr[10];
//    int **p;
//    int *pr;
//    int* prr[10];
//    test1(a);
//    test2(arr);
//    test3(&pr);
//    test3(p);
//    test3(prr);//�����β��Ƕ���ָ�룬��ָ������Ҳ����
//}

//����ָ��
//�����Ǻ����ĵ�ַ
//add(a,b);
//���ϣ�add��&add����ʾ�����ĵ�ַ�����Ǻ�����һ����add��ʾ��Ԫ�ص�ַ

//#include<stdio.h>
//int add(int x,int y)
//{
//    return x+y;
//}
//
//void print(char* str)
//{
//    printf("%s\n",str);
//}
//int main()
//{
//    //printf("%p",add);
//
//    //int* pa(int,int)=add;
//    //������⣺pa���Ⱥ�()��ϣ����˺���������������int���ͣ�����ֵ��ָ��
//
//    int(*pa)(int,int)=add;
//    //��ȷ����⣺һ��ָ�룬ָ��һ��������int���Ͳ����ĺ���,ָ�����ͺ�add����һ��Ϊint
//    printf("%d\n",(pa)(2,3));//��ⷽʽ��add����pa��add����add(2,3)
//    printf("%d\n",(*pa)(2,3));//��ʵ֤��������*��һ��,д����ֻ���������
//    printf("%d\n",(**pa)(2,3));
//
//    void (*paa)(char *)=print;
//    (*paa)("stringusingleoWOW");
//}

//�����δ��룺  (*(void (* )())0)()
//��˿���� ���ȿ��ڲ�   ()0 ��ʾǿ������ת������0ת���������ڵ�����
//0ǰ�������ڷ�����  void (*)() ����һ������ָ�룬�޲���������Ϊvoid
//���԰�0ת����һ��ָ�룬��һ����ַ��Ȼ��ǰ���һ��*��ͨ����ַ�ҵ����������
//(*)()��ʾ���ú������������ⲿ��ʾ�����ĵ���

//void (* signal(int,void (*)(int) )(int)
//������⣬����д�������ӣ�������һ�����д����
//typedef void(* pfun_d )(int);
//pfun_d signal(int,pfun_d);
//�����ε�ͬ���棬�����ں궨�壬��������͵ĺ궨�壬
//��void(*)(int)�������pfun_d



//����ָ������
#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}

main()
{
    //ָ������
    //int* p[10];
    //����ָ������,������������������ͬ������������ͬ
    int (*parr[5])(int,int)={" ",add,sub,mul,div};
//    for (int i=0;i<4;i++)
//        printf("%d\n",parr[i](2,3));//����˵��������*һ��

    //��;��
    int input=0;
    do
    {
        printf("����������");
        scanf("%d",&input);
        if (input>=1 && input<=4)
        {
            int x,y;
            printf("������Ҫ�������������");
            scanf("%d%d",&x,&y);
            int ret=parr[input](x,y);//������������switch������Щ����
            printf("%d\n",ret);
        }
        else if(input==0)
            printf("�˳�\n");
        else
            printf("�������\n");

    }while(input);
}

//char* my_strcpy(char* dest,const char* src);
//1.дһ������ָ�룬ָ��mystrcpy��
// char* (*pf)(char*,const char*)
//2.дһ������ָ�����飬���4��my_strcpy�����ĵ�ַ
// char* (*pfarr[4])(char*,const char*);


//�����Ѻ���ָ���������ת�Ʊ�
