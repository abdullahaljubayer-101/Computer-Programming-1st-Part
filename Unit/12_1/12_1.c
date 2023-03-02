#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char binary[100];
    int length, i, x, decimal=0;
    printf("Enter Binary Number:");
    scanf("%s", &binary);
    length=strlen(binary);
    x=length;
    for(i=0; i<length; i++){
        x--;
        decimal=decimal+((binary[i]-'0')*pow(2,x));
    }
    printf("In Decimal: %d\n", decimal);
    return 0;
}

