#include <stdio.h>

int main() {
    int n;
    
   
    scanf("%d", &n);

    char ch = 'A';    
    int num = 0;      

    for (int i = 1; i <= n; i++) {
     
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%c", ch++);

            if (j < n - i + 1 || (i - 1 > 0)) {
                printf(" ");
            }
        }
        
        for (int j = 1; j <= i - 1; j++) {
            printf("%d", num++);
            if (j < i - 1) {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}