#include<stdio.h>
#include<math.h>
int main(){
    int i, j, x;
    char n;
    printf("Enter a Letter or Number: ");
    scanf("%c", &n);
    for(i=0; i<11; i++){
        printf("%c", n);
    }
    printf("\n");
    x=1;
    for(i=6; i>1; i--){
        for(j=1; j<i; j++){
            printf("%c", n);
        }
        for(j=0; j<x; j++){
            printf(" ");
        }
        x=x+2;
        for(j=1; j<i; j++){
            printf("%c", n);
        }
        printf("\n");
    }
        x=7;
    for(i=0; i<4; i++){
        for(j=-2; j<i; j++){
            printf("%c", n);
        }
        for(j=0; j<x; j++){
            printf(" ");
        }
        x=x-2;
        for(j=-2; j<i; j++){
            printf("%c", n);
        }
        printf("\n");
    }
    for(i=0; i<11; i++){
        printf("%c", n);
    }
    return 0;
}
