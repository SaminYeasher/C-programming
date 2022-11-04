#include <stdio.h>
    typedef struct computerengineering{
        int roll;
        int id;
        float cgpa;
        char name;
    } coe;

    int main(){
    coe info[5];
    printf("enter information of the student 1:");
    scanf("%d", &info[0].roll);
    printf("enter information of the student 2:");
    scanf("%d", &info[1].roll);

return 0;
}