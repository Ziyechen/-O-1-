#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"
#include <malloc.h>

//尾插法建立单链表
ListNode * _BuyNode(int x)
{
	ListNode * tmp = (ListNode *)malloc(sizeof(ListNode));
	tmp->m_nValue = x;
	tmp->m_pNext = NULL;
	return tmp;
}
void PushBack(ListNode * &pListHead, int x)
{
	//1.空
	//2.不为空
	//
	if (pListHead == NULL)
	{
		pListHead = _BuyNode(x);
	}
	else
	{
		ListNode *tail = pListHead;
		while (tail->m_pNext != NULL)
		{
			tail = tail->m_pNext;
		}
		tail->m_pNext = _BuyNode(x);
	}
}

//查找结点
ListNode * Find(ListNode *pListHead, int x)
{
	if (pListHead == NULL)
	{
		return NULL;
	}
	else
	{
		ListNode *tail = pListHead;
		while (tail != NULL)
		{
			if (tail->m_nValue == x)
			{
				break;
			}
			tail = tail->m_pNext;
		}
		return tail;
	}
}

//打印链表
void Print(ListNode *pListHead)
{
	assert(pListHead);
	ListNode *cur = pListHead;
	while (cur)
	{
		printf("%d -> ", cur->m_nValue);
		cur = cur->m_pNext;
	}
	printf("NULL\n");
}
