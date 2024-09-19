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
	printf("��ʷ���ݵ���ɹ�\n");
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
	printf("������Ҫ��ӵ���ϵ��������->");
	scanf("%s", info.name);

	printf("������Ҫ�����ϵ�˵��Ա�->");
	scanf("%s", info.gender);

	printf("������Ҫ��ӵ���ϵ�����䣺->");
	scanf("%d", &info.age);

	printf("������Ҫ�����ϵ�˵ĵ绰��->");
	scanf("%s", info.tel);

	printf("������Ҫ�����ϵ�˵ĵ�ַ��->");
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
	printf("������Ҫɾ����ϵ�˵����֣�->");
	scanf("%s", name);

	int find = FindByName(con,name);
	if (find < 0) {
		printf("ɾ��ʧ��û���ҵ�������\n");
		return;
	}
	SLErase(con, find);
	printf("ɾ���ɹ�\n");
}

//  չʾͨѶ¼
void ContactShow(Contact* con) {
	printf("%-6s | %-6s | %-6s | %-6s | %-6s\n",
		"����", "�Ա�", "����", "�绰", "סַ");
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
		printf("�޸�ʧ��û���ҵ�����ϵ������\n");
		return;
	}

	//
	printf("������Ҫ�޸���ϵ�˵����֣�->");
	scanf("%s", con->arr[find].name);

	printf("������Ҫ�޸���ϵ�˵��Ա�->");
	scanf("%s", con->arr[find].gender);

	printf("������Ҫ�޸���ϵ�˵����䣺->");
	scanf("%d", &con->arr[find].age);

	printf("������Ҫ�޸���ϵ�˵ĵ绰��->");
	scanf("%s", con->arr[find].tel);

	printf("������Ҫ�޸���ϵ�˵ĵ�ַ��->");
	scanf("%s", con->arr[find].addr);


	printf("�޸ĳɹ�\n");
}


void ContactFind(Contact* con) {

	char name[NAME_MAX];
	printf("������Ҫ���ҵ���ϵ������->");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0) {
		printf("û���ҵ�����ϵ������\n");
		return;
	}

	printf("%-6s | %-6s | %-6s | %-6s | %-6s\n",
		"����", "�Ա�", "����", "�绰", "סַ");
	
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
	printf("ͨѶ¼���ݱ���ɹ�\n");
	fclose(pf);
}
		