#include <stdio.h>

int main(){
    int num;
    int MAX=0;
    int MIN=101;

    while(1){
        scanf("%d",&num);

        if(num==0){
            break;
        }

        if(num>1 && num<=100){
            if(num>MAX){
                MAX=num;
            }
            if(num<MIN){
                MIN=num;
            }
        }
    }

    printf("MAX = %d\n",MAX);
    printf("MIN = %d\n",MIN);

    return 0;
}