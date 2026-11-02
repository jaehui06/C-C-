#include <stdio.h>

int main() {
    int n;
    
    // 10 이하의 자연수 n을 입력받음
    scanf("%d", &n);

    int num = 1; // 1부터 시작하는 연속된 숫자

    // n개의 줄에 걸쳐 반복[cite: 17]
    for (int i = 1; i <= n; i++) {
        // 1. 공백 출력 (i - 1 개)
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        
        // 2. 숫자 출력 (n - i + 1 개)
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d", num++);
            // 숫자 사이에 공백 출력 (마지막 숫자가 아닐 경우)
            if (j < n - i + 1) {
                printf(" ");
            }
        }
        
        // 한 행의 출력이 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}