#include<stdio.h>
int main(){
    int ara[3]={1,2,3}, x=10;
    printf("ara[0]=%d\n", ara[0]);
    printf("x=%d\n", x);
    test_fut(ara, x);
    printf("ara[0]=%d\n", ara[0]);
    printf("x=%d\n", x);
    return 0;
}

void test_fut(int ara[3], int x){
    x=20;
    ara[0]=20;
    return;
}
