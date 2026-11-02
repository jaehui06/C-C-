#include <stdio.h>

int main(){
    int a,b;
    int sum=0;
    int count=0;
    double avg=0;

    scanf("%d %d",&a,&b);

    int min=(a<b)? a:b;
    int max=(a>b)? a:b;

    for(int i=min; i<=max; i++){
        if(i%3==0 || i%5==0){
            sum+=i;
            count++;
        }
    }
    if(count>0){
    avg=(double)sum/count;}

    printf("sum : %d\n",sum);
    printf("avg : %.1f\n",avg);

    return 0;
}