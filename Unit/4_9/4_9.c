#include<stdio.h>
int main(){
    int a=5, i=1, s=0;
    for(; i<=10; i++){
        s=s+a;
        printf("%dX%d=%d\n", a, i, s);
    }
    return 0;
}
