#include <stdio.h>

int main(){
    int score;

    while(1){

        if (scanf("%d", &score) != 1) {
            break;
        }


        if(score < 0 || score > 100){
            break;
        }

        if(score >= 80){
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}