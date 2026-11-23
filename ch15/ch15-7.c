#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100], best_name[100] = "";
    int score, max_score = -1;

    for (int i = 0; i < 5; i++) {
        scanf("%99s %d", name, &score);
        if (score > max_score) {
            max_score = score;
            strcpy(best_name, name);
        }
    }

    printf("%s %d\n", best_name, max_score);
    return 0;
}