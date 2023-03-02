#include<stdio.h>
int main(){
    char country[7][100]={"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row;
    for(row=0; row<7; row++){
        printf("%s\n", country[row]);
    }
    return 0;
}
