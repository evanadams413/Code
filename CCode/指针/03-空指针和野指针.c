/*
* 空指针：*p = null
* 野指针：*p 无分配
*
* - 如何合法使用内存
*   1. 系统分配的内存
*       int x;
*       int *p1 = &x;
*   2. 用户申请内存(堆内存)
*       char *str = (char *)malloc(32);
*       free(str);  // 释放内存 !=> 内存泄漏
*       str = NULL; // 野指针 -> 空指针
* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int *p1 = NULL;
    // *p1 = 100;    <- 段错误：访问了不能访问的内存

    int *p2 = (int *)malloc(sizeof(int[69]));
    *p2 = 2;
    free(p2);
    p2 = NULL;

    printf("*p2 = %d\n", *p2);
    return 0;
}
