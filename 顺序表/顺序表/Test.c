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
//	printf("数据为%d \n", SLFind(&sl, 5));
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
//	//初始化 
//	ContactInit(&con);
//	//添加联系人数据
//	ContactAdd(&con);
//
//	ContactShow(&con);
//
//	ContactFind(&con);
//
//
//	ContactModify(&con);
//	//删除联系人
//	//ContactDel(&con);
//
//	ContactShow(&con);
//	//销毁
//	ContactDesTroy(&con);
//
//}

#include <stdio.h>

void showMenu()
{
    printf("╔═══════════════════════════╗\n");
    printf("║      通讯簿管理系统       ║\n");
    printf("╠═══════════════════════════╣\n");
    printf("║  1. 添加联系人            ║\n");
    printf("║  2. 显示联系人            ║\n");
    printf("║  3. 删除联系人            ║\n");
    printf("║  4. 查找联系人            ║\n");
    printf("║  5. 修改联系人            ║\n");
    printf("║  6. 清空联系人            ║\n");
    printf("║  0. 退出通讯簿            ║\n");
    printf("╚═══════════════════════════╝\n");
}

enum Contact
{
    退出通讯簿,
    添加联系人,
    显示联系人,
    删除联系人,
    查找联系人,
    修改联系人,
    清空联系人,

};
int main()
{
    Contact con;
    ContactInit(&con);
    LoadContact(&con);
    int op = -1;
    do {
        showMenu();
        printf("请选择您的操作：->");
        scanf("%d", &op);

        switch (op)
        {
        case 添加联系人:
            ContactAdd(&con);
            break;
        case 显示联系人:
            ContactShow(&con);
            break;
        case  删除联系人:
            ContactDel(&con);
            break;
        case 查找联系人:
            ContactFind(&con);
            break;
        case 修改联系人:
            ContactModify(&con);
            break;
        case 清空联系人:
            ContactDesTroy(&con);
            break;
        case 退出通讯簿:
            break;
        default:
            printf("输入有误，请重新输入\n");
            break;
        }
    } while (op);

    SaveContact(&con);
    return 0;
}
