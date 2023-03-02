#include<stdio.h>
#include<string.h>
int main(){
    char word[100], word_r[100];
    int i, j, len;
    printf("Enter a Word: ");
    scanf("%s", word);
    len=strlen(word);
    for(i=0, j=len-1; i<len; i++, j--){
        word_r[i]=word[j];
    }
    word_r[i]='\0';
    printf("%s\n", word_r);
    if(0==strcmp(word, word_r)){
        printf("%s is a Palindrome.\n", word);
    }
    else{
        printf("%s is not a Palindrome.\n", word);
    }
    return 0;
}
