#include <stdio.h>

int main(){
    int a;
    int num=1;
    int sum=0;

    scanf("%d",&a);

    while(num<=a){
        sum+=num;
        num++;
    }
    printf("%d",sum);
}
