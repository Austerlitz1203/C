#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#define MAX 100
#define MaxName 20
#define MaxSex 5
#define MaxTel 15
#define MaxAddr 30
//表示人的信息
struct people
{
	char name[MaxName];
	char sex[MaxSex];//一个汉字两个字符,男、女、秘密(这个加上一个\0正好5个)
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

//初始化
void InitContact(struct contact* ps);
//增加信息
void AddContact(struct contact* ps);
//打印信息
void ShowContact(const struct contact* ps);
//删除指定联系人
void DeleteContact(struct contact* ps);
//通过名字找到某人
int FindByName(const struct contact* ps, char* name);
//找到某人并打印信息
void SearchContact(const struct contact* ps);
//修改
void ModifyContact(struct contact* ps);
//按照年龄来排序
void SortContact(const struct contact* ps);
//清空通讯录
void CleanContact(struct contact* ps);
