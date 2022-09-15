#define _CRT_SECURE_NO_WARNINGS 1
//HJ37  统计每个月兔子的总数
//#include<stdio.h>
//int main()
//{
//    int new[10000] = { 0 };
//    new[3] = 1;//第三个月要新出生一只
//    int old = 0, n, month = 3;//old是满三个月以上的
//    scanf("%d", &n);
//    if (n == 1 || n == 2)//前两个月
//        printf("1");
//    for (int i = 3;i <= n;i++)//大于三个月情况
//    {
//        if (new[i])
//        {
//            new[i + 2] = old + new[i];//这个月新出生的（三个月以上出生+刚满三个月出生的），后面要生
//            old += new[i];//加上刚满三个月出生的
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
//	printf("请输入字符ch：");// 1 2 3 回车
//	scanf("%c", &ch);// 读取123
//	printf("字符ch的值：%c\n", ch);//输出 字符ch的值：123
//	char c_tmp;
//	while ((c_tmp = getchar() != '\n') && c_tmp != EOF);
//	printf("请输入字符：");// 1  2  3 回车
//	printf("%c", getchar());  //由于清空了缓存区，第一个getchar()并没有读取123之后的回车，而是读取的1
//	printf("%c", getchar());// 读取并输出2
//	printf("%c", getchar());// 读取并输出3
//}

#include<stdio.h>
int main()
{
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
	//left和right分别表示该数据最左边和最右边的下标
	int mid = 0,target=5;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > target)
			right = mid - 1;//重置右端点
		if (arr[mid] < target)
			left = mid + 1;//重置左端点
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)//没找到的情况
		printf("没有找到！");
	return 0;
}