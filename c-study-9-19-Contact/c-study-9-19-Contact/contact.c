#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(struct contact* ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 0;
	ps->data = NULL;
	//memset(ps->data, 0, MAX * sizeof(struct people));//初始化函数
}

void CheckContact(struct contact* ps)
{
	assert(ps);
	if (ps->sz < ps->capacity)//不需要扩容
		return;
	//扩容
	int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	if (newcapacity == 4)
	{
		char* newdata1 = (struct people*)calloc(newcapacity, sizeof(struct people));
		ps->capacity = newcapacity;
		ps->data = newdata1;
		return;
	}
	char* newdata = (struct people*)realloc(ps->data, newcapacity * sizeof(struct people));
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
	//	printf("通讯录已满，无法添加数据！\n");
	//	return;
	//}
	
	//添加信息
	printf("请输入名字：");
	scanf("%s", ps->data[ps->sz].name);
	printf("请输入性别：");
	scanf("%s", ps->data[ps->sz].sex);
	printf("请输入电话：");
	scanf("%s", ps->data[ps->sz].tel);
	printf("请输入年龄：");
	scanf("%d", &(ps->data[ps->sz].age));//注意这里输入取地址
	printf("请输入地址：");
	scanf("%s", ps->data[ps->sz].addr);
	ps->sz++;
	printf("成功增加联系人！\n");
	return;
}

void ShowContact(const struct contact* ps)
{
	assert(ps);
	printf("%-20s%-5s%-5s%-15s%-30s\n","姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0;i < ps->sz;i++)
		printf("%-20s%-5s%-5d%-15s%-30s\n", ps->data[i].name, ps->data[i].sex, ps->data[i].age, ps->data[i].tel, ps->data[i].addr);
	return;
}
int FindByName(const struct contact* ps,char * name)
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
	printf("请输入要删除的人的名字: ");
	scanf("%s", name);
	int ret = FindByName(ps,name);
	if (ret == -1)
	{
		printf("没找到！\n");
		return;
	}
	for (int i = ret;i < ps->sz - 1;i++)
		ps->data[i] = ps->data[i + 1];
	ps->sz--;
	printf("成功删除指定联系人!\n");
	return;
}

void SearchContact(const struct contact* ps)
{
	assert(ps);
	char name[MaxName];
	printf("请输入要查找的人的名字: ");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("没找到！\n");
		return;
	}
	printf("%-20s%-5s%-5s%-15s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%-20s%-5s%-5d%-15s%-30s\n", ps->data[ret].name, ps->data[ret].sex, ps->data[ret].age, ps->data[ret].tel, ps->data[ret].addr);
	return;
}

void ModifyContact(struct contact* ps)
{
	assert(ps);
	char name[MaxName];
	printf("请输入要查找的人的名字: ");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("没找到！\n");
		return;
	}
	//修改
	printf("请输入名字：");
	scanf("%s", ps->data[ret].name);
	printf("请输入性别：");
	scanf("%s", ps->data[ret].sex);
	printf("请输入电话：");
	scanf("%s", ps->data[ret].tel);
	printf("请输入年龄：");
	scanf("%d", &(ps->data[ret].age));//注意这里输入取地址
	printf("请输入地址：");
	scanf("%s", ps->data[ret].addr);

	printf("修改成功！\n");
	return;
}

//按照年龄来排序
int cmp1(const void* e1, const void* e2)
{
	return ((struct people*)e1)->age - ((struct people*)e2)->age;
}

//按照名字来排序
int cmp2(const void* e1, const void* e2)
{
	return strcmp(((struct people*)e1)->name, ((struct people*)e2)->name);
}
void SortContact(const struct contact* ps)
{
	assert(ps);
	qsort(ps->data, ps->sz, sizeof(struct people), cmp2);
	printf("排序成功！\n");
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