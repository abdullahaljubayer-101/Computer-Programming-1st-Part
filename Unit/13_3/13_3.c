#include<stdio.h>
int main(){
    int i, j, x=7;
    for(i=0; i<7; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=0; j<x; j++){
            printf("c");
        }
        x--;
        printf("\n");
    }
    x=2;
    for(i=6; i>=1; i--){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(j=0; j<x; j++){
            printf("c");
        }
        x++;
        printf("\n");
    }
    return 0;
}
