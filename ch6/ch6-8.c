#include <stdio.h>

int main(){
    int num;
    int sum=0;

    scanf("%d",&num);

    for(int i=num; i<=100; i++){
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}