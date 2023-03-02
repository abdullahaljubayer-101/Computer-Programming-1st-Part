#include<stdio.h>
int main(){
    char ara[]="Bangladesh", i, n=10;
    for(i=0; i<n; i++){
        if(ara[i]>='a' && ara[i]<='z'){
            ara[i]='A'+(ara[i]-'a');
        }
    }
    printf("%s\n", ara);
    return 0;
}
