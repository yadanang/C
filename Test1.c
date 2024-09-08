#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <ctype.h>
#include<assert.h>
#include<string.h>
#include<errno.h>


int main() {
	int str[] = { 1,2,3,4,5,6 };
	int str2[] = { 1,6,3,4,5,6 };

	printf("%d", memcmp(str2, str, 12));
	
	return 0;
}
//void* My_memmove(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	if (dest < src) {
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((const char*)src)++;
//
//		}
//	}
//	else {
//		while (num--) {
//			*((char*)dest+num) = *((char*)src + num);
//
//		}
//	}
//	return ret;
//}
//
//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		My_memmove(arr , arr +2, 20);
//		for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//		
//	}
//
//		
//	return 0;
//
//}

//void *My_memcpy( void* str, void* str2, size_t num) {
//	
//	assert(str && str2);
//	/*for (int i = 0; i < num; i++) {
//		*( (char*)str + i) = *((char*)str2 + i);
//
//	}
// */
//	void* ret = str;
//	while (num--) {
//		*(char*)str = *(char*)str2;
//		((char*)str)++;
//		((char*)str2)++;
//	}
//	return ret;
//}

// void* my_memcpy(void* dest, void* src, size_t num) {
//	void* ret = dest;
//	int i = 0; 
//	assert(dest && src); 
//	while (num--) {
//		*(char*)dest = *(char*)src; 
//		((char*)src)++;
//		((char*)dest)++;
//	}
//	return ret;
//}

//int main() {
//	short arr[] = { 1,2,3,4,5,6,7 }; 
//	short arr1[20] = { 0 };
//
//
//	for (int i = 0; i < 20; i++) {
//		printf("%d ", *((short *)My_memcpy(arr1, arr, 10)+i));
//		
//	}
//	return 0;
//}
//

//int main() {
//	printf("%s\n", strerror(1));
//	perror("ÄãºÃ");
//	return 0;
//}
//int main() {
//
//	char arr[] = "13j.kjl89@sdlfkj#kdfj;98";
//	char arr1[] = ". %";
//
//	char* str = NULL;
//	/*for (str = strtok(arr, arr1); str != NULL; str = strtok(NULL, arr1)) {
//		printf("%s", str);
//	}*/
//
//	str = strtok(arr, arr1);
//	printf("%s\n", str);
//	str = strtok(NULL, arr1);
//	printf("%s", str);
//
//	return 0;
//}

//int My_strcmp(const char* arr1, const char* arr2) {
//
//	while ((*arr1 == *arr2) && *arr1 && *arr2) { arr2++; arr1++;
//}
//	return *arr1 - *arr2;
//}
//
//
//char* My_strstr( const char*arr1, const char*arr2) {
//	const char* cur = arr1;
//	const char* s1, * s2;
//
//	if (!*arr2) {
//		return (char*)arr1;
//	}
//	while (*cur) {
//		s1 = cur;
//		s2 = arr2;
//		while (*s1!='\0'&& *s2 != '\0' &&* s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//
//}
//int main() {
//	const char* arr1 = "Hello LIULIAN HAHAHA hahahah";
//	char arr2[] = "abcdefghijk";
//	char arr3[] = "cde";
//
//	 char* pch = My_strstr(arr2, arr3);
//	
//	printf("%s\n", pch);
//	//printf("%d", strncmp(arr2, arr1,4));
//
//	//int a = 1;
//	//printf("%d", (a = 1 - 9));
//	return 0;
//}
//char* My_strcpy( char*dest ,const char*src) {
//	char* ret = dest;
//	assert(dest && src);
//	int i = 0;
//	while (*(dest++) = *(src++)) {
//		
//		//printf("%c", (*dest = *src));
//
//	}
//
//	return ret;
//}
//
//
//char* My_strcat( char*dest,const char*src) {
//	char* ret = dest;
//	assert(dest && src);
//	while (*(dest))dest++;
//	while ((*(dest++) = *(src++)));
//	return ret;
//}
//
//
//int main() {
//	const char* arr1 = "abc";
//    char arr2[20] = "def";
//	//printf("%s", My_strcpy(arr2, arr1));
//	//printf("%c", *arr2 = *arr1);
//	/*int a = 3;
//	a++;
//	printf("%d", a);*/
//
//	printf("%s",My_strcat(arr2, arr1));
//	return 0;
//}
//size_t My_strlen( const char* str) {
//	assert(str);
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + My_strlen(str + 1);
//}
//
//
//int main() {
//	char arr[] = "aaaaaaaasdf";
//	int i = 0;
//	while(*(arr+i)) {
//		i++;
//	}
//	printf("%d\n", (arr + i) - arr);
//	printf("%d", My_strlen(arr));
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    char str[] = "first line \n second line \n";
//    while (*(str+i)) {
//        if (isspace(*(str + i))) {
//            *(str + i) = '*';
//
//        }
//        i++;
//    }
//    printf("%s", str);
//    return 0;
//}
//int main() {
//	char arr[] = "I am Student";
//	int i = 0;
//	while (*(arr+i)) {
//		if (*(arr + i) >= 'a' && *(arr + i) <= 'z') {
//			*(arr + i) -= 32;
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}