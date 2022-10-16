#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(struct contact* ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 0;
	ps->data = NULL;
	//memset(ps->data, 0, MAX * sizeof(struct people));//��ʼ������
	LoadCon(ps);
}

void CheckContact(struct contact* ps)
{
	assert(ps);
	if (ps->sz < ps->capacity)//����Ҫ����
		return;
	//����
	int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	if (newcapacity == 4)//��ʼ��֮�󣬲���ֱ��realloc
	{
		struct people* newdata1 = (struct people*)calloc(newcapacity, sizeof(struct people));
		ps->capacity = newcapacity;
		ps->data = newdata1;
		return;
	}
	struct people* newdata = (struct people*)realloc(ps->data, newcapacity * sizeof(struct people));
	if (!newdata)
	{
		exit(-1);
		return;
	}
	ps->data = newdata;
	ps->capacity = newcapacity;
	return;
}
void AddContact(struct contact* ps)
{
	assert(ps);
	CheckContact(ps);
	//if (ps->sz == ps->capacity)
	//{
	//	printf("ͨѶ¼�������޷�������ݣ�\n");
	//	return;
	//}

	//�����Ϣ
	printf("������������");
	scanf("%s", ps->data[ps->sz].name);
	printf("�������Ա�");
	scanf("%s", ps->data[ps->sz].sex);
	printf("������绰��");
	scanf("%s", ps->data[ps->sz].tel);
	printf("���������䣺");
	scanf("%d", &(ps->data[ps->sz].age));//ע����������ȡ��ַ
	printf("�������ַ��");
	scanf("%s", ps->data[ps->sz].addr);

	ps->sz++;
	printf("�ɹ�������ϵ�ˣ�\n");
	return;
}

void ShowContact(const struct contact* ps)
{
	assert(ps);
	printf("%-20s%-5s%-5s%-15s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0;i < ps->sz;i++)
		printf("%-20s%-5s%-5d%-15s%-30s\n", ps->data[i].name, ps->data[i].sex, ps->data[i].age, ps->data[i].tel, ps->data[i].addr);
	return;
}
int FindByName(const struct contact* ps, char* name)
{
	for (int i = 0;i < ps->sz;i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void DeleteContact(struct contact* ps)
{
	assert(ps);
	char name[MaxName];
	printf("������Ҫɾ�����˵�����: ");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("û�ҵ���\n");
		return;
	}
	for (int i = ret;i < ps->sz - 1;i++)
		ps->data[i] = ps->data[i + 1];
	ps->sz--;
	printf("�ɹ�ɾ��ָ����ϵ��!\n");
	return;
}

void SearchContact(const struct contact* ps)
{
	assert(ps);
	char name[MaxName];
	printf("������Ҫ���ҵ��˵�����: ");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("û�ҵ���\n");
		return;
	}
	printf("%-20s%-5s%-5s%-15s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-20s%-5s%-5d%-15s%-30s\n", ps->data[ret].name, ps->data[ret].sex, ps->data[ret].age, ps->data[ret].tel, ps->data[ret].addr);
	return;
}

void ModifyContact(struct contact* ps)
{
	assert(ps);
	char name[MaxName];
	printf("������Ҫ���ҵ��˵�����: ");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("û�ҵ���\n");
		return;
	}
	//�޸�
	printf("���������֣� ");
	scanf("%s", ps->data[ret].name);
	printf("�������Ա� ");
	scanf("%s", ps->data[ret].sex);
	printf("������绰�� ");
	scanf("%s", ps->data[ret].tel);
	printf("���������䣺 ");
	scanf("%d", &(ps->data[ret].age));//ע����������ȡ��ַ
	printf("�������ַ�� ");
	scanf("%s", ps->data[ret].addr);

	printf("�޸ĳɹ���\n");
	return;
}

//��������������
int cmp1(const void* e1, const void* e2)
{
	return ((struct people*)e1)->age - ((struct people*)e2)->age;
}

//��������������
int cmp2(const void* e1, const void* e2)
{
	return strcmp(((struct people*)e1)->name, ((struct people*)e2)->name);
}
void SortContact(const struct contact* ps)
{
	assert(ps);
	qsort(ps->data, ps->sz, sizeof(struct people), cmp2);
	printf("����ɹ���\n");
	return;
}

void CleanContact(struct contact* ps)
{
	assert(ps);
	//memset(ps->data, 0, sizeof(struct people) * MAX);
	ps->data = NULL;
	ps->sz = 0;
	ps->capacity = 0;
	return;
}

//�˳�ǰ�������ݵ�����
void SaveInfo(struct contact* ps)
{
	//���ļ���"wb"����һ�δ�д��Ḳ��ԭ���ݣ�����֮ǰ�Լ��ó����ŵ��ڴ����ˣ����Զ�һ��
	FILE* fp = fopen("contact.txt", "wb");
	if (!fp)
	{
		perror("SaveInfo::fopen");
		exit(-1);
	}

	//������Ϣ
	for (int i = 0;i < ps->sz;i++)
	{
		fwrite(ps->data + i, sizeof(struct people), 1, fp);
	}


	//�ر��ļ�
	fclose(fp);
	fp = NULL;
}

//�����ļ���Ϣ��ͨѶ¼
void LoadCon(struct contact* ps)
{
	//���ļ�
	FILE* fp = fopen("contact.txt", "rb");
	if (!fp)
	{
		perror("LoadCon::fopen");
		exit(-1);
	}

	//�������ݣ����ﲻ���þ��������ж���
	struct people temp = { 0 };
	//fread����������������ʵ���Ͽ��������ݸ�������������ÿ��ֻ����һ���˵���Ϣ�����Կ�������д
	while (fread(&temp, sizeof(struct people), 1, fp))
	{
		CheckContact(ps);
		ps->data[ps->sz] = temp;
		ps->sz++;
	}

	//�ر��ļ�
	fclose(fp);
	fp = NULL;
}