#include <stdio.h>

    int main(){
    FILE *fp;
    fp = fopen("Newtest.txt","w");
    fclose(fp);
return 0;
}