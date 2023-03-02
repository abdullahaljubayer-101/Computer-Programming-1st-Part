#include<stdio.h>
int find_max(int ara[], int n);
int main(){
    int ara[10]={10,90,50,70,100,20,90,50,70,40}, n=10, max;
    max=find_max(ara, n);
    printf("%d", max);
    return 0;
}

int find_max(int ara[], int n){
    int i, max=ara[0];
    for(i=1; i<n; i++){
        if(ara[i]>=max) max=ara[i];
    }
    return max;
}
