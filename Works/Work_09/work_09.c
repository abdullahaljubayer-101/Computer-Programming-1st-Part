#include<stdio.h>
int main(){
    double v, t, s;
    printf("Enter Velocity: ");
    scanf("%lf", &v);
    printf("Enter time: ");
    scanf("%lf", &t);
    s=v*2*t;
    printf("Distance: %.2lf", s);
    return 0;

}
