#include <stdio.h>

int main() {
    int n;
    int score;
    int sum = 0;
    double avg = 0.0;

    
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }

    
    avg = (double)sum / n;

   
    printf("%.2f\n", avg);

    return 0;
}