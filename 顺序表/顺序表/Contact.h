#pragma once
//定义联系人数据结构
//姓名 性别 年龄 电话 地址

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;


//初始化通讯录 
/*
对通讯录初始化实际上是要用到循序表的结构
给循序表改个名字 叫 Contact 


typedef SL Contact;
这里找不到 SL 需要包含SqeList.h 
但是 SqeList.h 包含了 Contact.h 这样子就互相矛盾了 
不能互相包含

这样子用一个前置声明解决问题
给循序表换一个名字并没有使用到 所以直接告诉编译器我有这么一个结构体
struct SqeList
*/

typedef struct SqeList Contact;
//typedef SL Contact;

/*
那能不能
typedef SL Contact;
不可以 SL是在头文件定义好一个结构体类型后改名叫做SL
所以要先有类型才能改名 
虽然你有类型名但是你没有包含头文件找不到SL
*/

//初始化通讯录 ( 实际上是循序表)
void ContactInit(Contact* con);
//通讯录的销毁
void ContactDesTroy(Contact* con);
//通信录添加数据
void ContactAdd(Contact* con);
//通讯录删除数据 
void ContactDel(Contact* con);
// 通讯录修改数据 
void ContactModify(Contact* con);
// 通讯录查找
void ContactFind(Contact* con);
//  展示通讯录数据
void ContactShow(Contact* con);
