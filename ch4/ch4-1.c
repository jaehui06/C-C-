#include <stdio.h>

int main(){
    int num=0;

    printf("정수를 입력하세요: ");
    scanf("%d",&num);

    if(num>10){
        printf("larger than 10",num);
    }

    return 0;
}