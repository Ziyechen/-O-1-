#pragma once

//给定单链表的头指针和一个结点指针，定义一个函数在O(1)时间删除该结点。
//链表结点和函数定义如下：
#include <stdio.h>
#include <assert.h>

struct ListNode
{
	int m_nValue;
	ListNode *m_pNext;
};

void DeleteNode(ListNode ** pListHead, ListNode *pToBeDeleted)
{
	if (pListHead == NULL || pToBeDeleted == NULL)
		return;

	//多个节点,要删除的结点不是尾结点
	if (pToBeDeleted->m_pNext != NULL)
	{
		ListNode *pNext = pToBeDeleted->m_pNext;

		pToBeDeleted->m_nValue = pNext->m_nValue;
		pToBeDeleted->m_pNext = pNext->m_pNext;

		delete pNext;
		pNext = NULL;
	}
	//一个结点
	else if (*pListHead == pToBeDeleted)
	{
		delete pToBeDeleted;
		*pListHead = NULL;
		pToBeDeleted = NULL;
	}
	//链表中多个结点，要删除的结点是尾结点
	else
	{
		ListNode *cur = *pListHead;
		while (cur->m_pNext != pToBeDeleted)
		{
			cur = cur->m_pNext;
		}

		cur->m_pNext = NULL;
		delete pToBeDeleted;
		pToBeDeleted = NULL;
	}
}

void PushBack(ListNode * &pListHead, int x);//插入结点
ListNode * Find(ListNode *pListHead, int x);//查找结点
void Print(ListNode *pListHead);//打印链表
