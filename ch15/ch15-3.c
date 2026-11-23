#include <stdio.h>

int main(void) {
    char my_name[] = "Jaehee";
    int my_age = 20;

    char friend_name[100];
    int friend_age;

    scanf("%99s %d", friend_name, &friend_age);

    printf("Your name: %s, age: %d\n", my_name, my_age);
    printf("Friend's name: %s, age: %d\n", friend_name, friend_age);

    return 0;
}