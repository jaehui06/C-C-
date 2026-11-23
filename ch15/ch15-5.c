#include <stdio.h>

struct Person{
    char name[100];
    int age;
};

int main(void){
    struct Person people[3];

    for(int i=0; i<3; i++){
        scanf("%99s %d",people[i].name,&people[i].age);
    }

    for(int i=0; i<3; i++){
        printf("Name : %s\n",people[i].name);
        printf("Age : %d\n",people[i].age);
    }
    return 0;
}