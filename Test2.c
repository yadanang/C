#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


void GetMemory(char** p)
{
	*p = (char*)malloc(100);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);

	free(str);
	str = NULL;
}

int main() {
	Test();
	return 0;
}

//int main() {
//
//	//int*p = (int*)malloc(5 * sizeof(int));
//	int* p = (int*)calloc(5 , sizeof(int));
//	if (p == NULL) {
//		perror("calloc");
//		return 1;
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		*(p + i) = i + 1;
//	}
//
//	int* ptr;
//	ptr = realloc(p, 999999999999999999 * sizeof(int));
//	if (ptr != NULL) {
//		p = ptr;
//
//		for (int i = 0; i < 10; i++) {
//			*(p + i) = i + 1;
//		}
//		for (int i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//
//		free(p);
//		p = NULL;
//
//	}
//	else {
//		perror("ralloc");
//		for (int i = 0; i < 5; i++) {
//			*(p + i) = i + 20;
//		}
//		free(p);
//		p = NULL;
//	}
//
//	ptr = NULL;
//	
//	return 0;
//}

//int main() {
//
//
//	union u
//	{
//		int i;
//		char a;
//	};
//
//	union u u;
//
//
//	enum day
//	{
//		mon = 1,tues,wed,thur,fri,saat,sun
//	};
//
//	enum day d = 0;
//
//	printf("%d", wed);
//
//	return 0;
//}

//int main() {
//
//	union
//	{
//		int i;
//		char j;
//	}n;
//
//	n.i = 1;
//	n.j = 0x00000002;
//	printf("%d ", n.j);//取得的是低地址
//
//	return 0;
//}



//struct 
//{
//	int a;
//}s;
//
//int main() {
//
//
//	s.a = 1;
//
//	return 0;
//}





//struct gift_list
//{
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	union {
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_pages;//⻚数
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int colors;//颜⾊
//			int sizes;//尺⼨
//		}shirt;
//	}item;
//};
//
//int main() {
//	struct gift_list  gift = { .item.book.title = "红龙梦",
//		.item.book.author = "罗贯中",.item.book.num_pages = 100 };
//
//	gift.item.book.num_pages = 99;
//
//	printf("%s %s %d", gift.item.book.title,
//		gift.item.book.author,
//		gift.item.book.num_pages);
//
//
//	return 0;
//}


//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main() {
//	union Un2 u = {0};
//	printf("%zd", sizeof(union Un2));
//	return 0;
//}


//struct s
//{
//	int a;
//	char b;
//	char c[9];
//};
//
//
//int main() {
//	struct s s = { .c = "ald"  };
//	s.a = 1;
//	s.b = 'a';
//	s.c = { "ald" };
//	printf("%s", s.c);
//	return 0;
//}
//int main() {
//    // 定义匿名结构体
//    struct {
//        int x;
//        int y;
//    } point;
//
//    // 定义指针并赋值
//    struct { int x; int y; } *p = &point;
//
//    // 通过指针赋值
//    p->x = 12;
//    p->y = 24;
//
//    printf("x = %d, y = %d\n", p->x, p->y);
//}

//struct s
//{
//	int a ;
//	char b;
//	char c[9];
//}U2, U = { 1,'U',{"abcderg"} };
//
//U = { .a = 1,'U',{"abcderg"} };
//
//
//
//
//struct
//{
//	int a;
//	char b;
//	char c[9];
//};
//
//int main() {
//	U2 = U;
//	printf("%d %c %s", U2.a, U2.b, U2.c);
//
//	U.a = 2;
//	U.b = 'U';
//	U.c[9] = "abcderg";
//
//
//	/*struct s s = { 1,'k',{"abcderg"} };
//	printf("%d %c %s", s.a, s.b, s.c);
//	printf("\n");
//	struct s s1 = { 1,'P',{"higklnm"} };
//	s = s1;
//	printf("%d %c %s", s.a, s.b, s.c);
//	printf("\n");
//
//	s.b = 'o';
//	printf("%d %c %s", s.a, s.b, s.c);
//	printf("\n");
//
//*/
//
//
//
//	return 0;
//}
//typedef struct s1
//{
//	char b;
//	int a[6];
//
//}s1;
//
//void print(s1 * p) {
//	printf("%c\n", p->b);
//	for (int i = 0; i < 6; i++) {
//		printf("%d\n", p->a[i]);
//	}
//}
//int main() {
//	s1 s = { .b = 'M',{1,2,3,4,5,6} };
//	print(&s);
//	return 0;
//}
//typedef struct 
//{
//	int data;
//	struct Node* next;
//} Node;
//
//int main() {
//
//	/*stu.id = 'v';
//	stu.age = 9;
//	stu.name[100] = "xiao";*/
//	Node m = { 6,NULL };
//	Node n = { 3,&m };
//
//	printf("%d ",n.next->data);
//
//	return 0;
//}

//int main() {
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 99;*/
//
//	int n = 0x00000001;
//
//
//	char* p = &n;
//	printf("%d", (char)n);
//	return 0;
//}