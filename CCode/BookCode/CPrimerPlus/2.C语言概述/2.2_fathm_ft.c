/* fathm_ft.c -- 把 2 音寻转换成英寸 */
#include <stdio.h>
int main()
{
    // 多个变量可以一起声明，变量数据类型相同
    int feet, fathoms;

    fathoms = 2;
    // 赋值时运用乘法运算，先执行运算然后进行赋值
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
