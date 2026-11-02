#include <stdio.h>

int main(){
    int num=0;

    printf("정수를 입력하세요: ");
    scanf("%d",&num);

    if(num<0){
        printf("%d",num);
        printf("\nminus");
    }
    else{
        printf("%d",num);
    }
}