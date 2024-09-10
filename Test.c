#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

#define forever for(;;){ printf("hahaha");}
#define print printf("alds\
					hjf\
					lasdkjf;f fffffffff\
					fdkljsa\
					dsfa");
#define M 100
#define SQ(x) ((M) + (x) + (x))

int main() {
	int a = 5;
	
	printf("%d ", SQ(5));

	return 0;
}




//int main(void)
//{
//	int c; // 注意：int，⾮char，要求处理EOF
//	FILE* fp = fopen("test.txt", "w");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到⽂件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取⽂件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须⽤⼆进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n)
//			printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt⽂件，发现⽂件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘）
//	//注：fflush 在⾼版本的VS上不能使⽤了
//	printf("再睡眠10秒-此时，再次打开test.txt⽂件，⽂件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭⽂件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}



//#include <stdio.h>
//
//int main() {
//    // 将文件从 D:/CODE/C 移动回当前目录
//    if (rename("D:/CODE/C/Test_9_10/newfile.txt","newfile.txt") == 0) {
//        printf("File moved back successfully to current directory.\n");
//    }
//    else {
//        perror("Error moving file back");
//    }
//
//    return 0;
//}



//int main()
//{
//    int ret;
//    char oldname[] = "file.txt";
//    char newname[] = "newfile.txt";
//
//    ret = rename(oldname, newname);
//
//    if (ret == 0)
//    {
//        printf("文件重命名成功");
//    }
//    else
//    {
//        printf("错误：不能重命名该文件");
//    }
//
//    return(0);
//}
