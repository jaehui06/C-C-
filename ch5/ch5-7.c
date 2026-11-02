#include <stdio.h>

int main(){
    int num;
    int cnt=0;
    int sum=0;
    double avg=0;

    while(1){
        scanf("%d",&num);

        if(num==0){
            break;
    }
    
    sum+=num;
    cnt++;
    }

    if(cnt>0){
        avg=(double)sum / cnt;
    }

    printf("cnt = %d\n",cnt);
    printf("sum = %d\n",sum);
    printf("avg = %.2f\n",avg);

    return 0;
}