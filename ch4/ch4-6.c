#include <stdio.h>

int main(){
    int num=0;

    printf("정수를 입력하세요:");
    scanf("%d",&num);

    if(num>=80){
        printf("Passed");
    }
    else{
        printf("Failed");
    }
    return 0;
}