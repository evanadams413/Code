/* 
 * 02-指针运算
 *
 * (*p)++;  <- 修改指针缩在地址的值
 * *p++;    <- 修改指针地址
 *
 * const int *p     <- const 修饰 *p <- 修饰指针所在的变量 <- 值无法改变(变量可以改变)
 * int *const p     <- const 修饰 p  <- 修饰指针地址 <- 地址无法改变
 * (const int* p  /  int* const p)
 *
 * 指针交换
 * 1. while ((*dest++ = *src++) != '\0');
 * 2. <string.h> -> strcpy();
 * */

#include <stdio.h>
#include <string.h>

void mystrcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
}

void mystrcpyPlus(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0');
}

int main() {
    int x = 1;
    int *p = &x;
    printf("*p = %d\n", *p);
    printf("*p = %d\n", ++*p);
    printf("*p = %d\n", (*p)++); // ...(pointer)operator...
    printf("*p = %d\n", *p);

    char s1[32] = "Hello, world!";
    char s2[32] = "213";

    // strcpy 函数
    strcpy(s2, s1); // s1 -> s2

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    char s3[32] = "Hello";
    char s4[32] = "1234567"; // 1 2 3 4 5 6 7 \0
    mystrcpy(s4, s3);        // H e l l o 6 7 \0

    printf("s4 = %s\n", s4);

    char s5[32] = "1234567";
    mystrcpyPlus(s5, s3); // H e l l o \0 7 \0

    printf("s5 = %s\n", s5);

    int num = 3;
    const int *p1 = &num;   // const修饰*p1 即num
    // (*p1)++;
    num++;
    printf("*p1 = %d\n", *p1);

    int *const p2 = &num;   // const修饰p2
    // p2++;
    (*p2)++;
    printf("*p2 = %d\n", *p2);

    const int *const p3 = &num;
    
    return 0;
}
