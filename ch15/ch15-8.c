#include <stdio.h>
#include <string.h>

int main(void){
    char name[100], min_name[100] = "";
    int height, min_height = 1000;

    for(int i = 0; i < 5; i++){
        scanf("%99s %d", name, &height);
        if(height < min_height){
            min_height = height;
            strcpy(min_name, name);
        }
    }

    printf("%s %d\n", min_name, min_height);
    return 0;
}