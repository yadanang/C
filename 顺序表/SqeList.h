#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>

//��̬˳���
typedef int SLDataType;

typedef struct SqeList {
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//��ʼ��
void SLInit(SL* ps);
//����
void SLDestroy(SL* ps);
//����
void SLCheckCapacity(SL* ps);
//β��
void SLPushBack(SL* ps, SLDataType x);
//ͷ��
void SLPushFront(SL* ps, SLDataType x);

//��ӡ
void print(SL s);

//ͷ��ɾ����β��ɾ��
void SLPopback(SL* ps); 
void SLPopfront(SL* ps);