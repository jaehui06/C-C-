#include <stdio.h>

int main(void){
    char name[100];
    char tel[100];
    char addr[100];

    scanf("%99s %99s %99s",name,tel,addr);

    printf("name : %s\n",name);
    printf("tel : %s\n",tel);
    printf("addr : %s\n",addr);

    return 0;
}