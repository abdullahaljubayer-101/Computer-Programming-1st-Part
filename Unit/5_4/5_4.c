#include<stdio.h>
int main(){
    double lone_amount, interest_amount, total_amount, mothly_amount, number_of_years;
    printf("Enter the lone amount: ");
    scanf("%lf", &lone_amount);
    printf("Enter the interest amount: ");
    scanf("%lf", &interest_amount);
    printf("Enter the number of years: ");
    scanf("%lf", &number_of_years);
    total_amount=lone_amount+lone_amount*interest_amount/100;
    mothly_amount=total_amount/(number_of_years*12);
    printf("Total Amount: %.2lf\n", total_amount);
    printf("Mothly Amount: %.2lf\n", mothly_amount);
    return 0;
}
