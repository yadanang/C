#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


void SLTPrint(SLTNode* phead) {
	while (phead) { //NULL != phead
		printf("%d -> ", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}


SLTNode* SLTBuyNode(Type x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (NULL == newnode) {
		perror("mallco fail!!!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SLTPushBack(SLTNode** pphead,Type x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);

	//处理空链表
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		SLTNode* ptail = *pphead;
		while (ptail->next) {
			ptail = ptail->next;
		}
		 
		ptail->next = newnode;
	}

	
}
//头插
void SLTPushFront(SLTNode** pphead, Type x) {
	assert(pphead);//本身不能为空 ，指向的可以
	SLTNode* newnode = SLTBuyNode(x);

	//不用处理空链表
	
		
		newnode->next = *pphead;
		*pphead = newnode;

	
}

//尾删
void SLTPopBack(SLTNode** pphead) {
	assert(pphead);
	assert(*pphead);

	//一个节点的时候
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {//多个节点的时候
			SLTNode* prev = *pphead;
			SLTNode* ptail = *pphead;

	while (ptail->next) {
		prev = ptail;
		ptail = ptail->next;
	}
	free(ptail); 
	ptail = NULL;
	prev->next = NULL;
	}

}
//用二级指针头节点删除后*pphead就为空了也会影响到实参




//头删
void SLTPopFront(SLTNode** pphead) {
	assert(pphead);
	assert(*pphead);

	//SLTNode* next = *pphead;

	//if (next->next == NULL) {
	//	*pphead = NULL;
	//	free(*pphead);

	//}
	//else {
	//	*pphead = next->next; //->优先级高于*
	//	next->next = NULL;
	//	free(next);
	//}

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
	
}


//查找
SLTNode* SLTFind(SLTNode* phead, Type x) {

	SLTNode* pcur = phead;
	while (pcur) {
		if (pcur->data == x) {
			return pcur;
		}
		else {
			pcur = pcur->next;
		}
	}
	return NULL;

}

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, Type x) {
	assert(pphead && *pphead && pos);

	SLTNode* prev = *pphead;//首节点地址
	SLTNode* newnode = SLTBuyNode(x);

	/*if (prev->next == NULL) {
		*pphead = newnode;
		newnode->next = pos;
	}*/
	if (*pphead == pos) {
		SLTPopFront(pphead, x);
	}
	else {
		while (prev->next != pos) {
			prev = prev->next;
		}


		prev->next = newnode;
		newnode->next = pos;
	}
	
}

//在指定位置之后插⼊数据
void SLTInsertAfter(SLTNode* pos, Type x) {
	assert(pos);

	SLTNode* prev = pos;
	SLTNode* newnode = SLTBuyNode(x);

	newnode->next = prev->next;
	prev->next = newnode;
}


//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos) {
	assert(pos && *pphead && pphead);
	SLTNode* prev = *pphead;
	SLTNode* ptail = *pphead;

	if (*pphead == pos) {
		/**pphead = NULL;
		free(pos);
		pos->next = NULL;*/
		SLTPopFront(pphead);

	}
	else {
		/*while (prev != pos) {
			ptail = prev;
			prev = prev->next;
		}*/
		while (prev->next != pos) {
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos->next = NULL;
	}
	
}

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos) {
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}


//销毁链表
void SListDesTroy(SLTNode** pphead) {
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;

	while (pcur) {
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}