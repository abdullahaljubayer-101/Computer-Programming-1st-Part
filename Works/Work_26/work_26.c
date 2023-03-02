#include<stdio.h>
int main(){
    int decimal, len=0, binary[100], i;
    printf("Enter Decimal Number(Enter 0 for Exit):\n");
    scanf("%d", &decimal);
    while(decimal!=0){
        binary[len]=decimal%2;
        decimal=decimal/2;
        len++;
    }
    printf("Binary is:\n");
    for(i=len-1; i>=0; i--){
        printf("%d", binary[i]);
    }
    return 0;
}
