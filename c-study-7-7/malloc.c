#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<string.h>
int main()
{
    int *p=(int*)malloc(10*sizeof(int));
    //���̣�
    // malloc(10*sizeof(int) ����ʮ��int���͵Ŀռ�
    //����������ص���������ǿ�ռ�ĵ�ַ
    //int* p= malloc(10*sizeof(int)
    //����Ϊmalloc��ʽ�����ķ���������void*��������ָ������Ϊint*
    //����ǿ������ת��
    //int *p=(int*)malloc(10*sizeof(int));

    if (p== NULL)
    {
        //���ٿռ�ʧ�ܵĻ�����ӡԭ��
        //Ҫ����Ƿ񿪱ٳɹ�
        printf("%s\n",strerror(errno));
    }
    else
    {
        //����ʹ�ÿռ�
        for(int i=0;i<10;i++)
            *(p+i)=i;
        for(int i=0;i<10;i++)
            printf("%-4d",*(p+i));
    }
    //����Ŀռ�ʹ�ý���,ͷ�ļ���stdlib.h
    free(p);
    p=NULL;//��Ȼ�ͷ��ˣ�����p�������ҵ��ǿ�ռ䣬Ϊ�˱����ƻ�������NULL
}
