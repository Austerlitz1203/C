#define _CRT_SECURE_NO_WARNINGS 1

//�������飨C99��׼��֧�֣�

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int arr[];//�ṹ�����һ��Ԫ�������Ǵ�Сδ֪�ģ�������ǰ��������һ����Ա
//};
//
//
//int main()
//{
//	printf("%d ", sizeof(struct S));//�����8���������a��b�Ĵ�С��arr�����С��0
//	//����������Ľṹ�壬�ڴ������malloc���ж�̬���䣬�ҷ����СҪ���ڽṹ���С������Ӧ��������Ԥ�ڴ�С
//
//	//����
//	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);//�ַ������ĸ�int�������ݴ�С�Ŀռ�
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	//ʹ��
//	s->a = 10;
//	s->b = 5.5;
//	for (int i = 0;i < 4;i++)
//		s->arr[i] = i+1;
//
//	printf("%d  %.2f\n", s->a,s->b);
//	for (int i = 0;i < 4;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//
//
//	//����
//	struct S* ptr = (struct S*)realloc(s, sizeof(struct S) + 10 * sizeof(int));
//	if (!ptr)
//	{
//		printf("realloc fail!");
//		exit(-1);
//	}
//	else
//	{
//		s = ptr;
//	}
//	//ʹ��
//	for (int i = 4;i < 10;i++)
//	{
//		s->arr[i] = i+1;
//	}
//	for (int i = 4;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	//�ͷ�
//	free(s);
//	return 0;
//}


//�����������飬�ṹ������ָ��
//�������кö����⣬һ���棬Ҫ���malloc������������ڴ���Ƭ����һ����Ҫ���realloc

//#include<stdio.h>
//#include<stdlib.h>
//
//struct S
//{
//	int a;
//	float b;
//	int* arr;
//};
//
//int main()
//{
//	//����
//	struct S*  s = (struct S*)malloc(sizeof(struct S));
//	if (!s)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	if (!ptr)
//	{
//		printf("malloc fail!");
//		exit(-1);
//	}
//	s->arr = ptr;
//
//	//ʹ��
//	s->a = 10;
//	s->b = 5.5;
//	for (int i = 0;i < 10;i++)
//	{
//		s->arr[i] = i + 1;
//	}
//
//	printf("%d %.2f\n", s->a, s->b);
//
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//
//	//�ͷ�
//	free(s);
//	s = NULL;
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}



//�ļ�����
//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//ʹ��
//	//for (int i = 0;i < 26;i++)
//	//{
//	//	fputc('a' + i, pf);
//	//}
//
//	int ch = 0;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test1.txt", "w");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д���ļ���һ��һ��д
//	fputs("hello", pf);
//	fputs("leo",pf);
//	//���ﲢ���ỻ�У�����Ҫ���еĻ����ֶ���\n
//	fputs("\nnextline", pf);
//
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("test1.txt", "r");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ���һ��һ�ж�
//	char arr[20] = "123456789";
//	fgets(arr, 5, pf);//5�����������Լ����ӵ�\0���������ֻ��һ�С�  ���һ��δ����һ�У���ô�´ν��Ŷ�
//
//	printf(arr);
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}



//#include<stdio.h>
//
//struct S
//{
//	char name[20];
//	int age;
//
//};

//д��ṹ������
//int main()
//{
//	struct S a = { "zhangsan",20 };
//
//	FILE* pf = fopen("test2.txt", "w");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//��ʽ��
//	fprintf(pf, "%s %d", a.name, a.age);
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}


//��ȡ�ṹ������
//int main()
//{
//	struct S b = { 0 };
//
//	FILE* pf = fopen("test2.txt", "r");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//��ʽ��
//	fscanf(pf,"%s %d",b.name,&(b.age));
//
//	printf("%s %d", b.name, b.age);
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}


//��������ļ�Ҫ���ļ����ر��ļ����������ü��̡���ĻΪʲôû�д�ӡ���̣��رռ�����Щ��
//��Ϊ����ִ��ʱ��Ĭ�ϴ�������
// stdin     ��׼������  --����
// stdout    ��׼�����  --��Ļ
// stderr    ��׼������  --��Ļ
//


//#include<stdio.h>
//
//int main()
//{
//
//	int ch = fgetc(stdin);
//	printf("%c ", ch);
//
//	return 0;
//}



//�����ƶ�д



#include<stdio.h>

struct S
{
	char name[20];
	int age;

};


//������д��
//int main()
//{
//	struct S a = { "zhangsan",20 };
//
//	FILE* pf = fopen("test4.txt", "wb");//���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//������д��
//	fwrite(&a,sizeof(a),1,pf);//д��ȥ֮��20����������Ϊ�Ƕ����Ʒ�ʽд��
//
//	//�ر�
//	fclose(pf);//��ʱpf����ָ��NULL
//	pf = NULL;
//
//	return 0;
//}

//�����ƶ�ȡ
int main()
{
	struct S b = { 0 };

	FILE* pf = fopen("test4.txt", "rb");//���·��
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//�����ƶ�
	fread(&b, sizeof(b), 1, pf);//д��ȥ֮��20����������Ϊ�Ƕ����Ʒ�ʽд��

	//�ر�
	fclose(pf);//��ʱpf����ָ��NULL
	pf = NULL;

	return 0;
}