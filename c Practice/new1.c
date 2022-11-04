#include <stdio.h>

    int main(){
    float price[3];
    
    printf("enter Apple price : ");
    scanf("%f",&price[0]);
    printf("enter Orange price : ");
    scanf("%f",&price[1]);
    printf("enter Mango price : ");
    scanf("%f",&price[2]);
    float total= price[0] + price[1]+ price[2];
    float totalwithGST = total + (total * 0.18) ;
    printf("Total price of three items  %.2lf\n",total);
    printf("Total price of three items with gst %.2lf",totalwithGST);
return 0;
}