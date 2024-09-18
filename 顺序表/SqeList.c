#define _CRT_SECURE_NO_WARNINGS 1

#include"SqeList.h"
//初始化
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}



//销毁
void SLDestroy(SL* ps) {

	free(ps->arr);
	ps->arr = NULL;

	ps->capacity = ps->size = 0;
}
//扩容
void SLCheckCapacity(SL* ps) {

	if (ps->capacity == ps->size) {
		//申请空间
		int newCapacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (NULL == tmp) {
			perror("空间开辟失败");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}

	
}

//尾插
void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);//判断是否是NULL
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}
//头插
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps); // 判断是否是NULL

	// 检查容量，必要时扩容
	SLCheckCapacity(ps);

	// 从后往前移动元素
	for (int i = ps->size; i > 0; --i) {
		ps->arr[i] = ps->arr[i - 1];
	}

	// 插入新元素到第一个位置
	ps->arr[0] = x;

	// 更新size
	ps->size++;
}

//打印
void print(SL s) {
	for (int i = 0; i < s.size; i++) {
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//尾删除
void SLPopback(SL* ps) {
	assert(ps);
	assert(ps->size);//成员不能为空
	--ps->size;
}

//头删除

void SLPopfront(SL* ps) {
	assert(ps);
	assert(ps->size);//成员不能为空

	for (int i = 0; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];

	}
	ps->size--;
}