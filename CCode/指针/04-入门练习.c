/*
 * 删除字符串中的空格
 *
 * */

#include <stdio.h>
#include <stdlib.h>

void delete_space(char *s)
{
    while (*s != '\0')
    {
        *s = *(s + 1);
        s++;
    }
}

int main()
{
    char *text = (char *)malloc(128);
    int i = 0;
    char ch;
    
    while ((ch = getchar()) != '\n')
    {
        *(text + i++) = ch;
    }

    char *begin = text;
    
    while (*text != '\0')
    {
        if (*text == ' ')
        {
            delete_space(text);
        }
        else if (*text != ' ')
        {
            text++;
        }
    }

    printf("%s\n", begin);
    
    return 0;
}
