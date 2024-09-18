#define _CRT_SECURE_NO_WARNINGS 1
#include"SqeList.h"

void Test() {
	SL sl;
	SLInit(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	//SLPushBack(NULL,0);
	print(sl);

	SLPopback(&sl);
	print(sl);

	SLPopback(&sl);

	print(sl);
	SLPopback(&sl);

	print(sl);
	/*SLPopback(&sl);
	SLPopback(&sl);
	SLPopback(&sl);*/

	
	SLPushFront(&sl, 6);
	SLPushFront(&sl, 7);
	SLPushFront(&sl, 8);


}

int main() {

	Test();
	return 0;
}