#include<stdio.h>
int main(){
    char ara1[100], ara2[100], ara3[200];
    int i, j;
    gets(ara1);
    gets(ara2);
    for(i=0,j=0; ara1[i]!='\0'; i++,j++){
        ara3[j]=ara1[i];
    }
    for(i=0; ara2[i]!='\0'; i++,j++){
        ara3[j]=ara2[i];
    }
    ara3[j]='\0';
    printf("%s\n", ara3);
    return 0;
}
