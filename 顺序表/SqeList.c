#define _CRT_SECURE_NO_WARNINGS 1

#include"SqeList.h"
//��ʼ��
void SLInit(SL* ps) {
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}



//����
void SLDestroy(SL* ps) {

	free(ps->arr);
	ps->arr = NULL;

	ps->capacity = ps->size = 0;
}
//����
void SLCheckCapacity(SL* ps) {

	if (ps->capacity == ps->size) {
		//����ռ�
		int newCapacity = ps->capacity == 0 ? 4 : 2 * (ps->capacity);
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (NULL == tmp) {
			perror("�ռ俪��ʧ��");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}

	
}

//β��
void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);//�ж��Ƿ���NULL
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}
//ͷ��
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps); // �ж��Ƿ���NULL

	// �����������Ҫʱ����
	SLCheckCapacity(ps);

	// �Ӻ���ǰ�ƶ�Ԫ��
	for (int i = ps->size; i > 0; --i) {
		ps->arr[i] = ps->arr[i - 1];
	}

	// ������Ԫ�ص���һ��λ��
	ps->arr[0] = x;

	// ����size
	ps->size++;
}

//��ӡ
void print(SL s) {
	for (int i = 0; i < s.size; i++) {
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//βɾ��
void SLPopback(SL* ps) {
	assert(ps);
	assert(ps->size);//��Ա����Ϊ��
	--ps->size;
}

//ͷɾ��

void SLPopfront(SL* ps) {
	assert(ps);
	assert(ps->size);//��Ա����Ϊ��

	for (int i = 0; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];

	}
	ps->size--;
}