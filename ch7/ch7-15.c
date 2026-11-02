#include <stdio.h>

int main() {
    int n;
    
    // 10 이하의 자연수 n을 입력받음
    scanf("%d", &n);

    // n개의 줄에 걸쳐 반복
    for (int i = 1; i <= n; i++) {
        // 공백 출력 (n - i 개)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // 별 출력 (2 * i - 1 개)
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        // 한 행의 출력이 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}