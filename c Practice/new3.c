#include <stdio.h>
#define rows 3
#define columns 4
int z [rows] [columns] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int main(){
        int a,b,c;
        for(a=0; a < rows; ++a){
            c=999;
            for(b =0; b < columns; ++b)
            if (z[a][b] < c) c = z [a][b];
            printf ("%d", c);
            
        }
    
return 0;
}