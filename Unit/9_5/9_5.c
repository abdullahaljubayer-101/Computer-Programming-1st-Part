#include<stdio.h>
int string_length(char ara[]);

int main(){
    char ara[100];
    int length;
    while(1==scanf("%s", ara)){//did not use &.
        length=string_length(ara);
        printf("length: %d\n", length);
    }
    return 0;
}


int string_length(char ara[]){
    int i, length=0;
    for(i=0; ara[i]!='\0'; i++){
        length++;
    }
    return length;
}
