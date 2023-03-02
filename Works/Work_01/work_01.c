#include<stdio.h>
int main(){
    int num1, num2, A, S, M, D;
    printf("Enter two number:\n");
    scanf("%d %d", &num1, &num2);
    A=num1+num2;
    S=num1-num2;
    M=num1*num2;
    D=num1/num2;
    printf("%d+%d=%d\n", num1,num2,A);
    printf("%d-%d=%d\n", num1,num2,S);
    printf("%d*%d=%d\n", num1,num2,M);
    printf("%d/%d=%d\n", num1,num2,D);
    return 0;
}
