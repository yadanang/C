#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
#include"SqeList.h"
void LoadContact(Contact* con) {
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf) {
		perror("fopen error\n");
		return;
	}

	peoInfo info;
	while (fread(&info, sizeof(peoInfo), 1, pf)) {
		SLPushBack(con, info);

	}
	printf("历史数据导入成功\n");
	fclose(pf);
}

void ContactInit(Contact* con) {
	SLInit(con);
}

void ContactDesTroy(Contact* con) {
	SLDestroy(con);
}
void ContactAdd(Contact* con) {
	peoInfo info;
	printf("请输入要添加的联系人姓名：->");
	scanf("%s", info.name);

	printf("请输入要添加联系人的性别：->");
	scanf("%s", info.gender);

	printf("请输入要添加的联系人年龄：->");
	scanf("%d", &info.age);

	printf("请输入要添加联系人的电话：->");
	scanf("%s", info.tel);

	printf("请输入要添加联系人的地址：->");
	scanf("%s", info.addr);



	SLPushBack(con,info);
}

int FindByName(Contact* con,char name[]) {
	for (int i = 0; i < con->size; i++) {
		if (0 == strcmp(con->arr[i].name, name)) {
			return i;
		}
	}
	return EOF;
}
void ContactDel(Contact* con) {
	char name[NAME_MAX];
	printf("请输入要删除联系人的名字：->");
	scanf("%s", name);

	int find = FindByName(con,name);
	if (find < 0) {
		printf("删除失败没有找到此姓名\n");
		return;
	}
	SLErase(con, find);
	printf("删除成功\n");
}

//  展示通讯录
void ContactShow(Contact* con) {
	printf("%-6s | %-6s | %-6s | %-6s | %-6s\n",
		"姓名", "性别", "年龄", "电话", "住址");
	for (int i = 0; i < con->size; i++) {
		printf("%-6s | %-6s | %-6d | %-6s | %-6s\n",
			con->arr[i].name,
			con->arr[i].gender, 
			con->arr[i].age, 
			con->arr[i].tel, 
			con->arr[i].addr);

	}


}


void ContactModify(Contact* con) {
	char name[NAME_MAX];
	printf("->");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0) {
		printf("修改失败没有找到此联系人姓名\n");
		return;
	}

	//
	printf("请输入要修改联系人的名字：->");
	scanf("%s", con->arr[find].name);

	printf("请输入要修改联系人的性别：->");
	scanf("%s", con->arr[find].gender);

	printf("请输入要修改联系人的年龄：->");
	scanf("%d", &con->arr[find].age);

	printf("请输入要修改联系人的电话：->");
	scanf("%s", con->arr[find].tel);

	printf("请输入要修改联系人的地址：->");
	scanf("%s", con->arr[find].addr);


	printf("修改成功\n");
}


void ContactFind(Contact* con) {

	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名->");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0) {
		printf("没有找到此联系人姓名\n");
		return;
	}

	printf("%-6s | %-6s | %-6s | %-6s | %-6s\n",
		"姓名", "性别", "年龄", "电话", "住址");
	
		printf("%-6s | %-6s | %-6d | %-6s | %-6s\n",
			con->arr[find].name,
			con->arr[find].gender,
			con->arr[find].age,
			con->arr[find].tel,
			con->arr[find].addr);

	
}


void SaveContact(Contact* con) {
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf) {
		perror("fopen error\n");
		return;
	}

	for (int i = 0; i < con->size; i++) {
		fwrite(con->arr + i, sizeof(peoInfo), 1, pf);
	}
	printf("通讯录数据保存成功\n");
	fclose(pf);
}
		