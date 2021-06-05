#pragma once

#ifndef  _TREE_H_
#define _TREE_H_
#include <stdbool.h>

//���ݾ����������Item
#define SLEN 20

typedef struct item {
	char petname[SLEN];
	char petkind[SLEN];
}Item;

#define MAXITEMS 10

typedef struct trnode {
	Item item;
	struct trnode* left;  /*ָ����ڵ��ָ��*/
	struct trnode* right; /*ָ���ҽڵ��ָ��*/
}Trnode;

typedef struct tree {
	Trnode *root; /*ָ����ڵ��ָ��*/
	int size; /*��������*/
}Tree;


/*����ԭ��*/

/*����:������ʼ��Ϊ��*/
/*
	ǰ������:
	ptreeָ��һ����
*/
/*
	��������:
	������ʼ��Ϊ��
*/
void InitializeTree(Tree *ptree);
/*����:ȷ�����Ƿ�Ϊ��*/
/*
	ǰ������:
	ptreeָ��һ����
*/
/*
	��������:
	�����Ϊ��,�ú�������true
	���򷵻�false
*/
bool TreeIsEmpty(const Tree* ptree);
/*����:ȷ�����Ƿ�����*/
/*
	ǰ������:
	ptreeָ��һ����
*/
/*
	��������:
	���������,�ú�������true
	���򷵻�false
*/

bool TreeIsFull(const Tree* ptree);

/*����:ȷ����������*/
/*
	ǰ������:
	ptreeָ��һ����
*/
/*
	��������:������������
*/
int TreeItemCount(const Tree* ptree);

/*����:����������һ����*/
/*
	ǰ������:
	pi�Ǵ�������ĵ�ַ
*/
/*
	��������:
	�����������,�ú���������������һ����
	������true
	���򷵻�false
*/
bool Tree_AddItem(const Item* pi,Tree *ptree);

/*����:�����в���һ����*/
/*
	ǰ������:
	piָ��һ����
	ptreeָ��һ���ѳ�ʼ������
	*/
/*
	��������:
	����������ҵ�ָ����
	����true
	���򷵻�false
*/
bool InTree(const Item* pi,const Tree* ptree);
/*����:������ɾ��һ����*/
/*
	ǰ������:
	pi��ɾ����ĵ�ַ
	ptreeָ��һ���ѳ�ʼ������
	*/
	/*
		��������:
		��������гɹ�ɾ��һ����
		����true
		���򷵻�false
	*/
bool DeleteItem(const Item* pi, Tree* ptree);

/*����:�Ѻ���Ӧ�������е�ÿһ��*/
/*
	ǰ������:
	ptreeָ��һ����
	pfunָ��һ������
	�ú�������һ��Item���͵Ĳ���,���޷���ֵ
	*/
	/*
		��������:
		pfunָ��ĺ���Ϊ���е�ÿһ��ִ��һ��
	*/
void Tree_Traverse(const Tree* ptree,void(*pfun)(Item item));

/*����:ɾ�����е���������*/
/*
	ǰ������:
	ptreeָ��һ���ѳ�ʼ������
	*/
	/*
		��������:
		��Ϊ��
	*/
void DeleteAll(Tree* ptree);

void Traverse_TREE(Tree* Tree_p);

#endif

