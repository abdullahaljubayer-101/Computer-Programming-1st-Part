#include<stdio.h>
int main(){
    int n, i, s=0;
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2){
        s=s+i;
    }
    printf("%d", s);
    return 0;
}
