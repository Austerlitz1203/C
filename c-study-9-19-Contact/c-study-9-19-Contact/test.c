#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("**************************\n");
	printf("****1��Add     2��Del*****\n");
	printf("****3��Search  4��Modify**\n");
	printf("****5��sort    6��Show****\n");
	printf("****0��Exit  **********\n");
	printf("**************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct contact con;
	InitContact(&con);
	menu();
	do
	{
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DeleteContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			SortContact(&con);
			break;
		case 6:
			ShowContact(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (input);

	return 0;
}