#include <stdio.h>

int main(){
    int a,b;
    int minus;

    scanf("%d %d",&a,&b);

    minus=(a>b)? a-b:b-a;

    printf("%d",minus);

    return 0;
}