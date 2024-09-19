#pragma once
//������ϵ�����ݽṹ
//���� �Ա� ���� �绰 ��ַ

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


//��ʼ��ͨѶ¼ 
/*
��ͨѶ¼��ʼ��ʵ������Ҫ�õ�ѭ���Ľṹ
��ѭ���ĸ����� �� Contact 


typedef SL Contact;
�����Ҳ��� SL ��Ҫ����SqeList.h 
���� SqeList.h ������ Contact.h �����Ӿͻ���ì���� 
���ܻ������

��������һ��ǰ�������������
��ѭ���һ�����ֲ�û��ʹ�õ� ����ֱ�Ӹ��߱�����������ôһ���ṹ��
struct SqeList
*/

typedef struct SqeList Contact;
//typedef SL Contact;

/*
���ܲ���
typedef SL Contact;
������ SL����ͷ�ļ������һ���ṹ�����ͺ��������SL
����Ҫ�������Ͳ��ܸ��� 
��Ȼ����������������û�а���ͷ�ļ��Ҳ���SL
*/

//��ʼ��ͨѶ¼ ( ʵ������ѭ���)
void ContactInit(Contact* con);
//ͨѶ¼������
void ContactDesTroy(Contact* con);
//ͨ��¼�������
void ContactAdd(Contact* con);
//ͨѶ¼ɾ������ 
void ContactDel(Contact* con);
// ͨѶ¼�޸����� 
void ContactModify(Contact* con);
// ͨѶ¼����
void ContactFind(Contact* con);
//  չʾͨѶ¼����
void ContactShow(Contact* con);
