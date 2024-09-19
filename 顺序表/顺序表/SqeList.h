#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include"Contact.h"

//动态顺序表
typedef peoInfo SLDataType;

typedef struct SqeList {
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* ps);
//销毁
void SLDestroy(SL* ps);
//扩容
void SLCheckCapacity(SL* ps);
//尾插
void SLPushBack(SL* ps, SLDataType x);
//头插
void SLPushFront(SL* ps, SLDataType x);

//打印
void print(SL s);

//头部删除和尾部删除
void SLPopback(SL* ps); 
void SLPopfront(SL* ps);

//在指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x);
//删除指定位置的数据
void SLErase(SL* ps, int pos);
//查找相关数据
int SLFind(SL* ps, SLDataType x);