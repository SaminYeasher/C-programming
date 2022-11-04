#include <stdio.h>

 void swaping(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2 = temp ;
 }
    int main(){
    int a = 10 ,b = 20 ;
    printf("Before swaping a = %d, b = %d\n",a,b);
    swaping(&a,&b);
    printf("After swaping a = %d, b = %d\n",a,b);
return 0;
}