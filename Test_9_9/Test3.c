#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>







int main() {

    FILE* pf = fopen("test.txt", "r");
    if (pf == NULL) {
        perror("fopen");
        return 1;
    }

    printf("%c ", fgetc(pf));
    
    fseek(pf, 5, SEEK_CUR);

    printf("%c ", fgetc(pf));

    fseek(pf, -4, SEEK_END);

    printf("%c ", fgetc(pf));

    
    printf("%ld ", ftell(pf));


    rewind(pf);
    printf("%ld ", ftell(pf));


    fclose(pf);
    pf = NULL;
 
    return 0;
}


//int main()
//{
//    FILE* pFile;
//    long size;
//    pFile = fopen("myfile.txt", "rb");
//    if (pFile == NULL)
//        perror("Error opening file");
//    else
//    {
//        fseek(pFile, 0, SEEK_END); // non-portable
//        size = ftell(pFile);
//        fclose(pFile);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}


//int main()
//{
//    FILE* pFile;
//    pFile = fopen("example.txt", "wb");
//    fputs("This is an apple.", pFile);
//    fseek(pFile, 9, SEEK_SET);
//    fputs(" sam", pFile);
//    fclose(pFile);
//    return 0;
//}


//struct S
//{
//    int a;
//    char b;
//    char arr[10];
//};

//int main() {
//    struct S s = { 33,'A',"hfkjlas"};
//
//    int arr[] = { 1,2,3,4,5,6 };
//    int arr2[20] = { 0 };
//    char arr1[30];
//    FILE* pf = fopen("test.txt", "rb");
//
//    if (pf == NULL) {
//        perror("fopen");
//        return 1;
//    }

    //sprintf(arr1, "%d %c %s", s.a, s.b, s.arr);

    //sscanf(arr1, "%d %c %s", &(s.a), &(s.b), s.arr);
    ////printf(arr1);
    //printf("%d %c %s", s.a, s.b, s.arr);
//    fread(arr2, sizeof(arr[0]), 3, pf);
//    printf("%d %d %d", arr2[0], arr2[1], arr2[2]);
//    
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//struct st
//{
//	int i;
//	int* p_a;
//};
//
//
//int main() {
//	struct st* p = (struct st*)malloc(sizeof(struct st));
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//
//	p->p_a = (int*)malloc(5 * sizeof(int));
//	if (p == NULL) {
//		perror("p_a  malloc");
//		free(p);
//		p = NULL;
//	}
//
//	for (int i = 0; i < 5; i++) {
//		p->p_a[i] = i + 1;
//	}
//
//	int* prt;
//	prt = (int*)realloc(p->p_a, 10 * sizeof(int));
//	if (prt == NULL) {
//		perror("realloc");
//		//使用原来p......
//		free(p);
//		p = NULL;
//	}
//
//	p->p_a = prt;
//	for (int i = 5; i < 10; i++) {
//		p->p_a[i] = i + 1;
//	}
//
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main() {
//
//	typedef struct S
//	{
//		int a;
//		int arr[];//没有指定大小
//	}S;
//
//	S* p = (S*)malloc(sizeof(S) + 5 * sizeof(int));
//
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//
//	p->a = 100;
//	for (int i = 0; i < 5; i++) {
//		p->arr[i] = i + 1;
//	}
//
//	//扩大空间啊
//	S* ptr;
//	ptr = (S*)realloc(p,sizeof(S) + 10 * sizeof(int));
//
//	if (ptr == NULL) {
//		perror("realloc");
//		//继续使用原p空间
//		//......
//		free(p);
//		p = NULL;
//		ptr = NULL;
//	}
//
//	p = ptr;
//	for (int i = 5; i < 10; i++) {
//		p->arr[i] = i + 1;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}