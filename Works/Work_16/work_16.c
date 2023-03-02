#include<stdio.h>
double fut_avrg (int ara[5], int n);

int main(){
    int ara[5]={4,5,10,19,5}, n=5;
    double avrg;
    avrg=fut_avrg(ara, n);
    printf("Average is: %.2lf\n", avrg);
    return 0;
}


double fut_avrg (int ara[5], int n){
    int i;
    double avrg, sum=0;
    for(i=0; i<n; i++){
        sum=sum+ara[i];
    }
    avrg=sum/n;
    return avrg;
}

