#include"NodeList.h"

pNode CreateNode()
{
	pNode pHead = (pNode)malloc(sizeof(Node));
	if (pHead == NULL)
	{
		return -1;
	}
	else
	{
		pHead->pNext = NULL;
		return pHead;
	}
}

void PushBack(pNode pHead, int tmp)
{
	pNode pNew = CreateNode();
	while (pHead->pNext)
	{
		pHead = pHead->pNext;
	}
	pHead->pNext = pNew;
	pNew->data = tmp;
}

void PrintNode(pNode pHead)
{
	while (pHead = pHead->pNext)
	{
		printf("%d ", pHead->data);
	}
	printf("\n");
}

bool is_empty(pNode pHead)
{
	if (pHead->pNext == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void SortList(pNode pHead)
{
	pNode p;
	pNode q;
	for (p = pHead->pNext; p != NULL; p = p->pNext)
	{
		for (q = p->pNext; q != NULL; q = q->pNext)
		{
			if (p->data > q->data)
			{
				int tmp = p->data;
				p->data = q->data;
				q->data = tmp;
			}
		}
	}
}
int length(pNode pHead)
{
	int i = 0;
	while (pHead->pNext)
	{
		i++;
		pHead = pHead->pNext;
	}
	return i;
}
void Insert(pNode pHead, int pos, int val)
{
	int i = 0;
	pNode pNew = CreateNode();
	pNew->data = val;
	i = length(pHead);
	//printf("%d", i);
	if (pHead->pNext == NULL && pos != 1)
	{
		printf("输入错误\n");
		return -1;
	}
	if (pos > i || pos < 1)
	{
		printf("输入错误\n");
		return -1;
	}
	while (pos-1)
	{
		pHead = pHead->pNext;
		pos--;
	}
	pNew->pNext = pHead->pNext;
	pHead->pNext = pNew;
}

void Delete(pNode pHead, int pos)
{
	int i = 0;
	i = length(pHead);
	if (i == 0)
	{
		printf("链表内无节点\n");
		return -1;
	}
	if (pos > i || pos <= 0)
	{
		printf("pos输入错误\n");
		return -1;
	}
	while (pos-1)
	{
		pHead = pHead->pNext;
		pos--;
	}
	pNode p = pHead->pNext;
	pHead->pNext = pHead->pNext->pNext;
	free(p);
}