#include<stdio.h>
int main(){
    char ch='j';
    if(ch>='a' && ch<='z'){
        printf("The letter is lower case.\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("The letter is upper case.\n");
    }
    return 0;
}
