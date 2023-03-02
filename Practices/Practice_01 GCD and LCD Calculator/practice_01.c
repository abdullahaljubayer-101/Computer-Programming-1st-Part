#include<stdio.h>
int main(){
    int a, b, c, gcd, lcm, i, m, n;
    printf("Enter two number for GCD or LCM:\n");
    scanf("%d %d", &a, &b);
    m=a; n=b;
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    gcd=m;
    printf("1.For GCD.   2.For LCM.\n");
    scanf("%d", &i);
    if(i==1){
        printf("GCD is: %d", gcd);
    }
    else{
        lcm=(a*b)/gcd;
        printf("LCM is: %d", lcm);
    }
    return 0;
}
//This is my code.
