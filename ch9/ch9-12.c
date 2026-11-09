#include <stdio.h>

int main() {
    int score[5][4];
    int sum[5] = {0, };     
    double avg[5] = {0.0, }; 
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
            sum[i] += score[i][j]; 
        }

        avg[i] = (double)sum[i] / 4.0;
    }
    

    for (int i = 0; i < 5; i++) {
        printf("%d  %.1f\n", sum[i], avg[i]);
    }

    return 0;
}
