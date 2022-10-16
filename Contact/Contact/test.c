#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("**************************\n");
	printf("****1、Add     2、Del*****\n");
	printf("****3、Search  4、Modify**\n");
	printf("****5、sort    6、Show****\n");
	printf("****7、Clean   0、Exit****\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct contact con;
	InitContact(&con);//初始化的时候，文件里的信息加载进去
	menu();
	do
	{
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case Clean:
			CleanContact(&con);
			break;
		case EXIT:
			SaveInfo(&con);
			printf("退出通讯录！\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (input);

	return 0;
}