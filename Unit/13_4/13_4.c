#include<stdio.h>
int main(){
    int i, j, x=1, y=18;
    for(i=0; i<10; i++){
        for(j=0; j<x; j++){
            printf("c");
        }
        for(j=0; j<y; j++){
            printf(" ");
        }
        for(j=0; j<x; j++){
            printf("c");
        }
        x++;
        y=y-2;
        printf("\n");
    }
    return 0;
}
