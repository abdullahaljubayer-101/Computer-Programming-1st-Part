#include<stdio.h>
int main(){
    int a, b, c, gcd;
    printf("Enter two number for GCD: \n");
    scanf("%d %d", &a, &b);
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    printf("GCD is: %d", a);
    return 0;
}
