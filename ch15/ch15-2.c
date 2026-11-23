#include <stdio.h>

int main(void){
    char name[20];
    char school[20];
    int grade;

    scanf("%19s %19s %d",name,school,&grade);

    printf("Name : %s\n",name);
    printf("School : %s\n",school);
    printf("Grade : %d\n",grade);

    return 0;

}