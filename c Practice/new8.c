#include <stdio.h>

    int main(){
    int num;
    
    printf("Enter Your Number :");
    scanf("%d", &num);
    if(num > 0){
        printf("The value of n is 1");
    }
    else if(num < 0){
        printf("The value of n is -1");
    }
    else{
        printf("The value of n is 0");
    }
return 0;
}