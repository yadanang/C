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

////��ӡ
//void print(SL s) {
//	for (int i = 0; i < s.size; i++) {
//		printf("%d ", s.arr[i]);
//	}
//	printf("\n");
//}

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


//��ָ��λ��֮ǰ����
void SLInsert(SL* ps, int pos, SLDataType x) {
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	if (pos < ps->size) {
		for (int i = ps->size; i >= pos ; --i) {
			ps->arr[i] = ps->arr[i - 1];
		}
		ps->arr[pos] = x;
		++ps->size;
	}
	else {
		ps->arr[ps->size] = x;
		++ps->size;
	}
	

}




//ɾ��ָ��λ�õ�����
void SLErase(SL* ps, int pos) {
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	assert(ps->size);

	for (int i = pos; i < ps->size - 1; i++) {
		ps->arr[i] = ps->arr[i + 1];
	}
	--ps->size;
}

//
////ָ��λ�ò���
//int SLFind(SL* ps, SLDataType x) {
//	assert(ps);
//	for (int i = 0; i < ps->size; i++) {
//		if (x == ps->arr[i]) {
//			return i;
//		}
//	}
//	return EOF;
//
//}
