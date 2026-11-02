#include <stdio.h>

int main(){
    char alp;

    scanf("%c",&alp);

    if(alp=='A'){
        printf("Excellent");
    }
    else if(alp=='B'){
        printf("Good");
    }
    else if(alp=='C'){
        printf("Usually");
    }
    else{
        printf("error");
    }
    return 0;
}