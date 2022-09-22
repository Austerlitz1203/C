#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#define MAX 100
#define MaxName 20
#define MaxSex 5
#define MaxTel 15
#define MaxAddr 30
//��ʾ�˵���Ϣ
struct people
{
	char name[MaxName];
	char sex[MaxSex];//һ�����������ַ�,�С�Ů������(�������һ��\0����5��)
	char tel[MaxTel];
	int age;
	char addr[MaxAddr];

};

struct contact
{
	struct people data[MAX];
	int sz;
};

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW,
	Clean
};

//��ʼ��
void InitContact(struct contact* ps);
//������Ϣ
void AddContact(struct contact* ps);
//��ӡ��Ϣ
void ShowContact(const struct contact* ps);
//ɾ��ָ����ϵ��
void DeleteContact(struct contact* ps);
//ͨ�������ҵ�ĳ��
int FindByName(const struct contact* ps, char* name);
//�ҵ�ĳ�˲���ӡ��Ϣ
void SearchContact(const struct contact* ps);
//�޸�
void ModifyContact(struct contact* ps);
//��������������
void SortContact(const struct contact* ps);
//���ͨѶ¼
void CleanContact(struct contact* ps);
