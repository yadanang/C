#define _CRT_SECURE_NO_WARNINGS 1
#include"SqeList.h"

//void Test() {
//	SL sl;
//	SLInit(&sl);
//
//
//
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 6);
//	SLPushBack(&sl, 7);
//	//SLPushBack(NULL,0);
//	print(sl);
//
//	SLInsert(&sl, 1, 9);
//	print(sl);
//
//	SLErase(&sl, sl.size -1);
//	print(sl);
//
//	
//
//	printf("����Ϊ%d \n", SLFind(&sl, 5));
//
//	printf("%d ", SLFind(&sl, 20));
//
//	//SLPopback(&sl);
//	//print(sl);
//
//	//SLPopback(&sl);
//
//	//print(sl);
//	//SLPopback(&sl);
//
//	//print(sl);
//	///*SLPopback(&sl);
//	//SLPopback(&sl);
//	//SLPopback(&sl);*/
//
//	//
//	//SLPushFront(&sl, 6);
//	//SLPushFront(&sl, 7);
//	//SLPushFront(&sl, 8);
//}
//

//void ContactTest01() {
//
//	Contact con;
//	//��ʼ�� 
//	ContactInit(&con);
//	//�����ϵ������
//	ContactAdd(&con);
//
//	ContactShow(&con);
//
//	ContactFind(&con);
//
//
//	ContactModify(&con);
//	//ɾ����ϵ��
//	//ContactDel(&con);
//
//	ContactShow(&con);
//	//����
//	ContactDesTroy(&con);
//
//}

#include <stdio.h>

void showMenu()
{
    printf("�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
    printf("�U      ͨѶ������ϵͳ       �U\n");
    printf("�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g\n");
    printf("�U  1. �����ϵ��            �U\n");
    printf("�U  2. ��ʾ��ϵ��            �U\n");
    printf("�U  3. ɾ����ϵ��            �U\n");
    printf("�U  4. ������ϵ��            �U\n");
    printf("�U  5. �޸���ϵ��            �U\n");
    printf("�U  6. �����ϵ��            �U\n");
    printf("�U  0. �˳�ͨѶ��            �U\n");
    printf("�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
}

enum Contact
{
    �˳�ͨѶ��,
    �����ϵ��,
    ��ʾ��ϵ��,
    ɾ����ϵ��,
    ������ϵ��,
    �޸���ϵ��,
    �����ϵ��,

};
int main()
{
    Contact con;
    ContactInit(&con);
    LoadContact(&con);
    int op = -1;
    do {
        showMenu();
        printf("��ѡ�����Ĳ�����->");
        scanf("%d", &op);

        switch (op)
        {
        case �����ϵ��:
            ContactAdd(&con);
            break;
        case ��ʾ��ϵ��:
            ContactShow(&con);
            break;
        case  ɾ����ϵ��:
            ContactDel(&con);
            break;
        case ������ϵ��:
            ContactFind(&con);
            break;
        case �޸���ϵ��:
            ContactModify(&con);
            break;
        case �����ϵ��:
            ContactDesTroy(&con);
            break;
        case �˳�ͨѶ��:
            break;
        default:
            printf("������������������\n");
            break;
        }
    } while (op);

    SaveContact(&con);
    return 0;
}
