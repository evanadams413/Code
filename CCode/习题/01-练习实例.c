/*
题目：
有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
*/

#include <stdio.h>

int main()
{
    // hundred
    for (int i = 1; i < 5; i++)
    {
        // ten
        for (int j = 1; j < 5; j++)
        {
            // one
            for (int k = 1; k < 5; k++)
            {
                if (i!=k&&i!=j&&j!=k)
                { 
                printf("%d\n", i * 100 + j * 10 + k);
                }
            }
        }
    }
    return 0;
}