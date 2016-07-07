#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "SList.h"
using namespace std;

void TestDelete()
{
	ListNode *pListHead = NULL;
	PushBack(pListHead, 1);
	PushBack(pListHead, 2);
	PushBack(pListHead, 3);
	PushBack(pListHead, 4);

	Print(pListHead);

	DeleteNode(&pListHead, Find(pListHead, 2));
	DeleteNode(&pListHead, Find(pListHead, 4));
	DeleteNode(&pListHead, Find(pListHead, 1));
	DeleteNode(&pListHead, Find(pListHead, 3));
	DeleteNode(&pListHead, Find(pListHead, 0));

	Print(pListHead);
}

int main()
{
	TestDelete();

	system("pause");
	return 0;
}
