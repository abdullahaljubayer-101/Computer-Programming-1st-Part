#include<stdio.h>
int main(){
    char ara[]="BANGLADESH", i, n=10;
    for(i=0; i<n; i++){
        if(ara[i]>='A' && ara[i]<='Z'){
            ara[i]='a'+(ara[i]-'A');
        }
    }
    printf("%s\n", ara);
    return 0;
}
