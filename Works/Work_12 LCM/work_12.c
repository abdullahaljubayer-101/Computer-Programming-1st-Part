#include<stdio.h>
int main(){
    int a,b,c,gcd,lcm,m,n;
    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);
    m=a; n=b;
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    gcd=m;
    lcm=(a*b)/gcd;
    printf("LCM is: %d", lcm);
    return 0;
}
