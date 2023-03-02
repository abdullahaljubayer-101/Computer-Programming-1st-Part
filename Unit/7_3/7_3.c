#include<stdio.h>
    double add (double n1, double n2){
        double sum=n1+n2;
        return sum;
    }
int main(){
    double a=2.7, b=4.9, s;
    s=add(a,b);
    printf("%.2lf", s);
    return 0;
}
