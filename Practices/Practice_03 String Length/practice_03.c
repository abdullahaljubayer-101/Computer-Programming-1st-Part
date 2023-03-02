#include<stdio.h>
int main(){
    char ara[100];
    int length=0, i;
    gets(ara); //scanf("%s", &ara);
    for(i=0; ara[i]!='\0'; i++){
        length++;
    }
    printf("Length: %d\n", length);
    return 0;
}
