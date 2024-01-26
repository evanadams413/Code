/* printl.c -- 演示 printf() 的一些特性 */
#include <stdio.h>
int main()
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // 遗漏第二个参数

    return 0;
}
