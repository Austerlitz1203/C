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
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[500] = { 0 };
//    int count = 0;
//    while (gets(a))
//    {
//        int len = strlen(a);
//        for (int i = 0;i < len;i++)
//        {
//            int flag = 1;
//            for (int j = 0;j < i;j++)
//            {
//                if (a[i] == a[j])
//                    flag = 0;
//            }
//            if (flag == 1)
//                count++;
//        }
//        printf("%d", count);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("�������ַ�ch��");// 1 2 3 �س�
//	scanf("%c", &ch);// ��ȡ123
//	printf("�ַ�ch��ֵ��%c\n", ch);//��� �ַ�ch��ֵ��123
//	char c_tmp;
//	while ((c_tmp = getchar() != '\n') && c_tmp != EOF);
//	printf("�������ַ���");// 1  2  3 �س�
//	printf("%c", getchar());  //��������˻���������һ��getchar()��û�ж�ȡ123֮��Ļس������Ƕ�ȡ��1
//	printf("%c", getchar());// ��ȡ�����2
//	printf("%c", getchar());// ��ȡ�����3
//}

#include<stdio.h>
int main()
{
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
	//left��right�ֱ��ʾ����������ߺ����ұߵ��±�
	int mid = 0,target=5;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > target)
			right = mid - 1;//�����Ҷ˵�
		if (arr[mid] < target)
			left = mid + 1;//������˵�
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)//û�ҵ������
		printf("û���ҵ���");
	return 0;
}