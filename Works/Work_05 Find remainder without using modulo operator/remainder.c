#include<stdio.h>
int main(){
    int num, d, x;
    printf("Enter a Number:\n");
    scanf("%d", &num);
    printf("Enter the Divisor:\n");
    scanf("%d", &d);
    again: while(num>d){
                num=num-d;
                goto again;

            }
    printf("Remainder is: %d\n", num);
    //code checker.
    x=num%d;
    printf("Remainder is: %d\n", x);
    return 0;

}
