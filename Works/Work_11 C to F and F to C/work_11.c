#include<stdio.h>
int main(){
    double c, f;
    int n;
    printf("1. For Celsius to Fahrenheit. 2.For Fahrenheit to Celsius.");
    scanf("%d", &n);
    if(n==1){
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &c);
        f=(c*1.8)+32;
        printf("Temperature in Fahrenheit: %.2lf", f);
    }
    else{
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &f);
        c=(f-32)*5/9;
        printf("Temperature in Celsius: %.2lf", c);
    }
    return 0;
}
