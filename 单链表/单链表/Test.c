#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"


void SListTest() {
	/*SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;

	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;

	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->data = 3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	SLTNode* plist = node1;
	SLTPrint(plist);*/
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 0);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* find = SLTFind(plist, 1);
	if (find == NULL) {
		printf("没有此数据\n");
	}
	else {
		//SLTInsert(&plist, find, 99);
		//SLTInsertAfter(find, 99);
		//SLTErase(&plist, find);
		SLTEraseAfter(find);
	}
	//SLTPopBack(&plist);
	//SLTPopFront(&plist);

	SLTPrint(plist);
	SListDesTroy(&plist);
	SLTPrint(plist);

}
int main() {
	SListTest();
	return 0;
}