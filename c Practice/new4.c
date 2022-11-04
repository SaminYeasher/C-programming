#include <stdio.h>
#include <string.h>
    typedef  struct student{
        int roll;
        float cgpa;
        char name[100];
    } stu;
    int main(){
    stu s1 = {992,5.00,"Samin"};
    stu *ptr = &s1;
    printf("Name of the student = %s\n", ptr->name);


return 0;
}