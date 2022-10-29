#define _CRT_SECURE_NO_WARNINGS 1


//
// scanf ����һ���ĸ�ʽ�Ӽ�����������
// printf ����һ���ĸ�ʽ�����ݴ�ӡ����Ļ
// �����ڱ�׼���롢������ĸ�ʽ�����롢������
// 
// fscanf  ����һ����ʽ�����������ļ�/stdin����������
// fprintf ����һ����ʽ����������������ļ�/stdout���������
// �������������롢������ĸ�ʽ�����롢������
// 
// 
// sscanf ���ַ����а���һ���ĸ�ʽ��ȡ����
// sprintf �Ѹ�ʽ�������ݰ���һ���ĸ�ʽת�����ַ���
//
//

//
//#include<stdio.h>
//
//struct info
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct info a = { "zhangsan",30,95.5f };
//	char buf[100] = { 0 };
//
//	//�Ѹ�ʽ������ת�����ַ�����������ַ��������档
//	sprintf(buf, "%s %d %f", a.name, a.age, a.score);
//	printf(buf);
//
//	//��buf�а��ո�ʽ���뵽�ڴ�����
//	sscanf(buf, "%s %d %f", a.name, &(a.age), &(a.score));
//	printf("\n%s %d %.2f", a.name, a.age, a.score);
//
//	return 0;
//}
//


//�ļ��������ȡ
//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen()");
//		return 1;
//	}
//	int ch = fgetc(pf);//���ڵ�ǰ�ļ��ڵڶ����ַ���λ��
//	printf("%c\n", ch);
//
//	fseek(pf, 1, SEEK_CUR);//�ļ�ָ�����ļ��ĵ�ǰλ�ã�ƫ��1���ַ�
//	ch = getc(pf);
//	printf("%c\n", ch);
//
//	//fseek������һ���������ļ������ڶ���������ƫ������������������ƫ�Ƶ���ʼλ�ã����ú��ļ�ָ��ָ��ĳ��λ��
//	fseek(pf, 3, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fseek(pf, -3, SEEK_END);//�������ǰƫ��3���ַ���ȡ����
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//���ص�ǰ�ļ�ָ��ָ���λ��
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//
//	rewind(pf);//�ļ�ָ�뷵�س�ʼλ��
//	ch = getc(pf);
//	printf("%c\n", ch);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//�ı��ļ��Ͷ������ļ�
// �������ڴ��д洢�Ƕ�������ʽ���������ת���ŵ�������棬��ô�ı����Ƕ������ļ�
//���Ҫ�����������ASCLL����ʽ�洢�������ڴ洢ǰת������ASCLL�ַ��洢���ļ������ı��ļ�



//�ļ���ȡ���ж�
//�����õ�feof   �ļ���ȡ�����У�����ʹ��feof�ķ���ֱֵ���ж��ļ��Ķ�ȡ�Ƿ����
// feof���������ǣ����ļ���ȡ����ʱ�����жϣ��Ƕ�ȡʧ�ܶ����������Ƕ�ȡ���ļ�ĩβ����
// feof���ط�0����ô�Ƕ����ļ�ĩβ������  �������0����ô���Ƕ�ȡʧ�ܶ�������
//

//�ı��ļ��жϽ���
//fgetc�����ȡ������ ���ظ��ַ���ASCLL��ֵ����ȡʧ�ܣ�����EOF
//fgets��ȡ���������ش�����ݵĿռ����ʼ��ַ�����򷵻�NULL
//fscanf��ȡ���������ص��Ǹ�ʽ��ָ�������ݵĸ�������ȡʧ�ܣ����ص���С�ڸ�ʽ����ָ�������ݸ���

//�������ļ��жϽ���
//fread�����������ص���ʵ�ʶ�ȡ���ݸ��������򷵻�С���趨�Ķ�ȡ���ݸ���
#include<stdio.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		perror("fopen()");
		return 1;
	}

	int ch;
	while (ch = fgetc(pf) != EOF)
	{
		putchar(ch);
	}

	//�ж���ʲôԭ�������
	if (ferror(pf))
	{
		printf("I/O error in reading!\n");
	}
	else if (feof(pf))//�����������ط�0
	{
		printf("End of file reach successfully!\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}

//�ļ�������Ҳֵ��ע��