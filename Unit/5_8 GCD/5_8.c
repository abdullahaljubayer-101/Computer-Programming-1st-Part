#include<stdio.h>
int main(){
    int a, b, x;
    printf("Enter 2 number for GCD.\n");
    scanf("%d %d", &a, &b);
    if(a<b) x=a;
    else x=b;
    while(x>0){
        if(a%x==0 && b%x==0){
            printf("GCD is: %d\n", x);
            break;
        }
        x--;
    }
    return 0;

}
