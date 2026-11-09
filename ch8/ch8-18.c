#include <stdio.h>

int main(){
    double arr[6];
    double sum=0.0;

    for(int i=0; i<6; i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }

    double avg= sum / 6.0;

    printf("%.1f\n",avg);
    return 0; 
}