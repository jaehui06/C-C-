#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = 1; i <= 9; i++) {
        for (int j = start; j <= end; j++) {
            printf("%d * %d = %2d", j, i, j * i);
            
            if (j < end) {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}