#include<stdio.h>
double fut_A(int r, double pi);

int main(){
    int r=10;
    double pi=3.1416, A;
    A=fut_A(r, pi);
    printf("%.2lf\n", A);
    return 0;
}

double fut_A(int r, double pi){
    double A;
    A=pi*r*r;
    return A;
}
