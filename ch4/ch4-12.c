#include <stdio.h>

int main(){
    int num=0;

    scanf("%d",&num);

    if(num>0){
        if(num%2==0){
            printf("Even Number");
        }
        else{
            printf("Odd Number");
        }
    }
    else{
        printf("Non positive");
    }
    return 0;
}