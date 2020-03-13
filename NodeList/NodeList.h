#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct Node
{
	int data;
	struct Node* pNext;
}Node,*pNode;

void PushBack(pNode p, int tmp);
pNode CreateNode();
void PrintNode(pNode pHead);
bool is_empty(pNode pHead);
void Delete(pNode pHead, int pos);
