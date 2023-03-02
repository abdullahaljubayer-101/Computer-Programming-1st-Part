#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int i, j, len;
    printf("Enter a Word: ");
    scanf("%s", word);
    len=strlen(word);
    for(i=0, j=len-1; i<len; i++, j--){
        if(word[i]!=word[j]){
            printf("%s is not a Palindrome.\n", word);
            break;
        }
    }
    if(i==len){
        printf("%s is a Palindrome.\n", word);
    }
    return 0;
}
//we did it.
