#include"NodeList.h"

int main()
{
	pNode pHead = CreateNode();
	PushBack(pHead, 1);
	PushBack(pHead, 5);
	PushBack(pHead, 4);
	PushBack(pHead, 7);
	PushBack(pHead, 8);
	PushBack(pHead, 3);
	PushBack(pHead, 5);
	PrintNode(pHead);
	if (is_empty(pHead))
	{
		printf("������Ϊ��\n");
	}
	else
	{
		printf("������Ϊ��\n");
	}
	//SortList(pHead);
	PrintNode(pHead);
	Insert(pHead, -1, 10);
	PrintNode(pHead);
	Delete(pHead, 0);
	PrintNode(pHead);

	return 0;
}

