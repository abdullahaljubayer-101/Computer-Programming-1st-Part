#include<stdio.h>
int main(){
    int ara[10]={10,20,30,10,40,50,30,10,60,10}, i, j, count;
    for(i=10; i<=60; i=i+10){
        count=0;
        for(j=0; j<10; j++){
            if(i==ara[j]){
                count++;
            }
        }
        printf("%d count is  %d\n", i, count);
    }
    return 0;
}
