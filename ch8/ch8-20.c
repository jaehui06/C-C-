#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int sum = 0;
    int multiple_count = 0;
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            multiple_count++;
            sum += arr[i];
        }
    }
    
    double avg = 0.0;
    if (multiple_count > 0) {
        avg = (double)sum / multiple_count;
    }
    
    printf("Multiples of 5 = %d\n", multiple_count);
    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", avg);

    return 0;
}