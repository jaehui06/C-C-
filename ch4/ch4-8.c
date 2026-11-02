#include <stdio.h>

int main(){
    int num=0;

    printf("정수를 입력하세요:");
    scanf("%d",&num);

    if(num>=90){
        printf("Excellent");
    }
    else if(num>=80){
        printf("Good");
    }
    else if(num>=70){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}