#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int outcome;
    char grades;

    printf("점수를 입력하세요:");
    scanf("%d",&outcome);

    switch(outcome / 10)
    {
    case 10:
    case 9:
        grades='A';
        break;
    case8:
        grades='B';
        break;
    case7:
        grades='C';
        break;
    case6:
        grades='D';
        break;
    default:
        grades='E';
        break;
        
}
    printf("학점: %c\n",grades);
    return 0;
}