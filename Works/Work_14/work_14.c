#include<stdio.h>
int min_fnt(int ara[], int n);
int main(){
    int ara[10]={2,5,7,9,2,4,9,3,2,7}, i, n=10, min;
    min=min_fnt(ara, n);
    printf("Min num is: %d", min);
    return 0;
}

int min_fnt(int ara[10], int n){
    int i, min=ara[0];
    for(i=1; i<n; i++){
        if(min>=ara[i]) min=ara[i];
    }
    return min;
}
