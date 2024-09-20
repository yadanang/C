#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>


typedef int Type;
typedef struct SListNode {
	Type data;
	struct SListNode* next;
}SLTNode;


void SLTPrint(SLTNode* phead);
//尾插
void SLTPushBack(SLTNode** pphead,Type x);
//头插
void SLTPushFront(SLTNode** pphead, Type x);
//尾删
void SLTPopBack(SLTNode** pphead);
//用二级指针头节点删除后*pphead就为空了也会影响到实参
//头删
void SLTPopFront(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode* phead, Type x);

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, Type x);
//在指定位置之后插⼊数据
void SLTInsertAfter(SLTNode* pos, Type x);


//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SListDesTroy(SLTNode** pphead);