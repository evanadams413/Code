#include <complex.h>
#include <stdio.h>

int gameMain();

int main()
{
    int score = 0;
    char text;
FLAG:
    score += gameMain();
    printf("你想要重新开始吗(y/n): ");
    scanf("%c", &text);
    while (text == 'y' || text == 'Y')
    {
        goto FLAG;
    }
    // else
    // {
    //     printf("游戏结束!");
    // }

    return 0;
}

int gameMain()
{
    int number = 1, condition = 3;
    int guessNumber, returnNumber;
    while (condition) {
        printf("请输入你的数字：");
        scanf("%d", &guessNumber);
        if (number == guessNumber)
        {
            printf("你赢了！\n");
            returnNumber = 1;
            break;
        }
        else
        {
            if (number > guessNumber)
            {
                printf("你的数字太小了\n");
            }
            else if (number < guessNumber)
            {
                printf("你的数字太大了\n");
            }
            condition--;
            if (condition != 0)
            {
                printf("你还有 %d 次机会。", condition);
            }
        }
        printf("你输了！");
        returnNumber = 0;
    }
    return returnNumber;
}
