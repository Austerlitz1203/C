#define _CRT_SECURE_NO_WARNINGS 1
//HJ37  ͳ��ÿ�������ӵ�����
//#include<stdio.h>
//int main()
//{
//    int new[10000] = { 0 };
//    new[3] = 1;//��������Ҫ�³���һֻ
//    int old = 0, n, month = 3;//old�������������ϵ�
//    scanf("%d", &n);
//    if (n == 1 || n == 2)//ǰ������
//        printf("1");
//    for (int i = 3;i <= n;i++)//�������������
//    {
//        if (new[i])
//        {
//            new[i + 2] = old + new[i];//������³����ģ����������ϳ���+���������³����ģ�������Ҫ��
//            old += new[i];//���ϸ��������³�����
//        }
//        else if (new[i] == 0)
//        {
//            new[i + 2] = old;
//        }
//    }
//    int ret = old + new[n + 1] + new[n + 2];
//    printf("%d", ret);
//    return 0;
//}


//HJ10
#include<stdio.h>
#include<string.h>
int main()
{
    char a[500] = { 0 };
    int count = 0;
    while (gets(a))
    {
        int len = strlen(a);
        for (int i = 0;i < len;i++)
        {
            int flag = 1;
            for (int j = 0;j < i;j++)
            {
                if (a[i] == a[j])
                    flag = 0;
            }
            if (flag == 1)
                count++;
        }
        printf("%d", count);
    }
    return 0;
}