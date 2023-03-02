#include<stdio.h>
#include<string.h>
#include<math.h>
void binary_function(int decimal);
void decimal_function(char binary[100]);
int main(){
    int n, decimal;
    char binary[100];
    while(1){
        printf("For Decimal to Binary Enter 1\n");
        printf("For Binary to Decimal Enter 2\n");
        printf("For Exit Enter 0\n");
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n==1){
            printf("Enter Decimal Number: ");
            scanf("%d", &decimal);
            binary_function(decimal);
        }
        if(n==2){
            printf("Enter Binary Number: ");
            scanf("%s", &binary);
            decimal_function(binary);
        }
        printf("\n\n\n");
    }
    return 0;
}

void binary_function(int decimal){
    int binary[100], len=0, i;
    while(decimal!=0){
        binary[len]=decimal%2;
        decimal=decimal/2;
        len++;
    }
    printf("In Binary: ");
    for(i=len-1; i>=0; i--){
        printf("%d", binary[i]);
    }
}

void decimal_function(char binary[100]){
    int len, decimal=0, i, power;
    len=strlen(binary);
    power=len;
    for(i=0; i<len; i++){
        power--;
        decimal=decimal+((binary[i]-'0')*pow(2,power));
    }
    printf("In Decimal: ");
}












