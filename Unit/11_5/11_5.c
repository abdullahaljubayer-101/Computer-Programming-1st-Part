#include<stdio.h>
#include<string.h>
int main(){
    char country[7][100]={"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, length;
    for(row=0; row<7; row++){
        length=strlen(country[row]);
        for(col=0; col<length; col++){
            printf("[%d][%d]=%c\n",row, col, country[row][col]);
        }
        printf("\n");
    }
    return 0;
}

