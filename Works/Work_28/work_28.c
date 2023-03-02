#include<stdio.h>
int main(){
    double factorial=1;
    int n, i;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if(n==0){
        printf("Factorial is: 1");
    }
    else{
        factorial=factorial*n;
        for(i=1; i<n; i++){
            factorial=factorial*(n-i);
        }
        printf("Factorial is: %.0lf", factorial);
    }
    return 0;
}
