#include<stdio.h>
int main(){
    char ara1[]="Bangla", ara2[]="desh", ara3[100];
    int length1=6, length2=4, i, j;
    for(i=0,j=0; i<length1; i++,j++){
        ara3[j]=ara1[i];
    }
    for(i=0; i<length2; j++,i++){
        ara3[j]=ara2[i];
    }
    ara3[j]='\0';
    printf("%s\n", ara3);
    return 0;
}
