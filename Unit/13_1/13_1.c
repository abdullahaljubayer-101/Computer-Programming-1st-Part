#include<stdio.h>
int main(){
    int i, j;
    for(i=7; i>=1; i--){
        for(j=0; j<i; j++){
            printf("c");
        }
        printf("\n");
    }
    for(i=2; i<=7; i++){
        for(j=0; j<i; j++){
            printf("c");
        }
        printf("\n");
    }
    return 0;
}
