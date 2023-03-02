#include<stdio.h>
int main(){
    int ara[10]={25,47,42,56,32,29,10,44,83,49}, n=10, ara_odd[20], ara_even[20], i=0, j=0, a;
    for(a=0; a<n; a++){
        if(ara[a]%2==0){
            ara_even[i]=ara[a];
            i++;

        }
        else{
            ara_odd[j]=ara[a];
            j++;
        }
    }

    printf("Even Element is: ");
    for(a=0; a<i; a++){
        printf("%d,", ara_even[a]);
    }

    printf("\n");

    printf("Odd Element is: ");
    for(a=0; a<j; a++){
        printf("%d,", ara_odd[a]);
    }
    return 0;
}
// I wrote this code without help.
