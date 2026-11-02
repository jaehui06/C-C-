#include <stdio.h>

int main(){
    double base;
    double height;
    double area;
    char choice;

    while(1){
        scanf("%lf %lf",&base,&height);

        area=(base * height)/2.0;

        printf("Triangle width = %.1f\n",area);

        printf("Continue?");
        scanf(" %c",&choice);

        if(choice !='Y' && choice !='y'){
            break;
        }
    }
    return 0;
}