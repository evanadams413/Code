#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[32];
    char phoneNumber[11];
};

void tip();
void tip1();
void show();
void add();

int main() {
    int x;
    char ch;
    tip();
    while (1) {
        scanf("%d", &x);
        switch (x) {
        case 1:
            show();
                // getchar();
            // tip1();
            break;
        case 2:
            add();
            tip();
            break;
        case 0:
            printf("程序结束，祝你生活愉快！\n");
            break;
        }
    }

    return 0;
}

void tip() {
    system("clear");
    printf("                    ☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("                                 欢迎进入通讯录\n");
    printf("                    ☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n\n\n");
    printf("	             【1】显示功能       |	     【2】增加功能     "
           "\n\n");
    printf("	             【3】删除功能       |	     【4】待定功能     "
           "\n\n");
    printf("	             【5】查询功能       |           【6】待定功能  "
           "\n\n");
    printf("	             【7】待定功能       |	     【8】待定功能     "
           "\n\n");
    printf("	             【0】退出功能       |	      \n\n");
    printf("-------------------------------------------------------------------"
           "-------------\n");

    printf("请输入你的数字: ");
}

void tip1() {
    printf("	             【1】显示功能       |	     【2】增加功能     "
           "\n\n");
    printf("	             【3】删除功能       |	     【4】待定功能     "
           "\n\n");
    printf("	             【5】查询功能       |           【6】待定功能  "
           "\n\n");
    printf("	             【7】待定功能       |	     【8】待定功能     "
           "\n\n");
    printf("	             【0】退出功能       |	      \n\n");
    printf("-------------------------------------------------------------------"
           "-------------\n");

    printf("请输入你的数字: ");
}

void show() {
    printf("123\n");
    getchar();
}

// 添加信息
void add() {
    struct Person person;
    // 获取名字
    char name[32];
    printf("名字：");
    scanf("%s", name);
    strcpy(person.name, name);
    // 获取手机号码
    char number[11];
    printf("手机号码：");
    scanf("%s", number);
    strcpy(person.phoneNumber, number);

    // printf("添加成功！\n");
}
