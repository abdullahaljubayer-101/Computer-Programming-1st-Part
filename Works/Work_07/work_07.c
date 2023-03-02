#include<stdio.h>
int main(){
    int i, j, s=0;
    for(i=1; i<=20; i++){
        for(j=1; j<=10; j++){
            s=s+i;
            printf("%dX%d=%d\n", i, j, s);
        }
        s=0; //we done this.
        printf("\n");
    }
    return 0;
}

