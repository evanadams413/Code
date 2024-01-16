#include <stdio.h>
#include <string.h>

void strTrim(char *str);

int main()
{
    char text[30];
    while (1)
    {
        printf("> ");
        scanf("%s", text);
        strTrim(text);
        printf("%s\n", text);
    }
}

// 字符串删除空格
void strTrim(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            
        }
        str++;
    }
}
