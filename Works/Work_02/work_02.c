#include<stdio.h>
int main(){
    double num1, num2, A, S, M, D;
    printf("Enter two number:\n");
    scanf("%lf %lf", &num1, &num2);
    A=num1+num2;
    S=num1-num2;
    M=num1*num2;
    D=num1/num2;
    printf("%.0lf+%.0lf=%.0lf\n", num1,num2,A);
    printf("%.0lf-%.0lf=%.0lf\n", num1,num2,S);
    printf("%.0lf*%.0lf=%.0lf\n", num1,num2,M);
    printf("%.0lf/%.0lf=%.2lf\n", num1,num2,D);
    return 0;
}

