#include<stdio.h>
int main(){
    int i, j, x=11;
    for(i=0; i<6; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=0; j<x; j++){
            printf("c");
        }
        x=x-2;
        printf("\n");
    }
    x=3;
    for(i=5; i>=1; i--){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(j=0; j<x; j++){
            printf("c");
        }
        x=x+2;
        printf("\n");
    }
    return 0;
}
