#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include"Contact.h"

//��̬˳���
typedef peoInfo SLDataType;

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

//��ָ��λ�ò���
void SLInsert(SL* ps, int pos, SLDataType x);
//ɾ��ָ��λ�õ�����
void SLErase(SL* ps, int pos);
//�����������
int SLFind(SL* ps, SLDataType x);